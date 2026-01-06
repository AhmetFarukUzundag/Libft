NAME = libft.a
FLAG = -Wall -Wextra -Werror 

# SRC adında bir değişken tanımlıyor ve bu değişken kaynak dosyaları (.c dosyaları) tutacak.
# Değer, bir shell komutu ile dinamik olarak belirleniyor:
# $(shell ...) → Makefile içinde bir shell komutu çalıştırır ve çıktısını değişkene atar.
# find . → mevcut dizinden başlayarak tüm dosyaları arar.
# ! -name "ft_lst*.c" → ismi ft_lst ile başlayan (örneğin ft_lstnew.c, ft_lstadd_front.c vb.) tüm .c dosyalarını hariç tutar.
# -name "ft_*.c" → ismi ft_ ile başlayıp .c ile biten dosyaları seçer.
# SRC = $(shell find . ! -name "ft_lst*.c" -name "ft_*.c")

# BONUS = $(shell find -name "ft_lst*.c")

# İlgili patterna uyan dosyaların listesini verir. Pattern: *.c, ft_*.c, src/*.c gibi
SRC = $(wildcard ft_*.c)
BONUS = $(wildcard ft_lst*.c)

CC = gcc

# SRC içindeki her dosya uzantısını .c yerine .o yap ve sonucu OBJ değişkenine ata.
# Yani tüm kaynak dosyaların derlenmiş hali olan object dosyaları (.o dosyaları) listesi oluşur.
OBJ = $(SRC:.c=.o)
BONUS_OBJ = $(BONUS:.c=.o)

# Kullanıcı sadece make komutunu yazarsa, all hedefini (targetini) çalıştır.
# Makefile’da target, “make X” dediğinde çalışan şeydir.
all: $(NAME)

%.o: %.c
	${CC} $(FLAG) -c $< -o $@

$(NAME): $(OBJ)
	ar rcs $(NAME) $(OBJ)

bonus: $(OBJ) $(BONUS_OBJ)
	ar rcs $(NAME) $(OBJ) $(BONUS_OBJ)

clean:
	rm -f $(BONUS_OBJ) $(OBJ)

fclean: clean
	rm -f $(NAME) 
	
re: fclean all

.PHONY: all bonus clean fclean re 

# target: dependency1 dependency2 dependency3
# 	komutlar
# Make şunu yapar:

# make bonus dedin

# Make bakar:

# $(OBJ) var mı? Yoksa üret

# $(BONUS_OBJ) var mı? Yoksa üret

# Hepsi hazır olunca: