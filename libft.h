# ifndef LIBFT_H
# define LIBFT_H

// #ifndef DOSYA_ADI_H → "DOSYA_ADI_H" makrosu daha önce tanımlanmamışsa devam et.
// #define DOSYA_ADI_H → Makroyu tanımla (ilk dahil edilmede çalışır).
// Dosya ikinci kez dahil edilmek istendiğinde #ifndef koşulu false olur ve içeriği atlanır.
// #endif ile blok sonlandırılır.
// Yani: Multiple definition’ı önlemek için.

# include <unistd.h>
# include <stdlib.h>
# include <string.h>

int ft_isalpha(int c);
int ft_isdigit(int c);
int ft_isalnum(int c);
int ft_isascii(int c);
int ft_isprint(int c);
size_t ft_strlen(const char *s);
void *ft_memset (void *s, int c, size_t n);

# endif 