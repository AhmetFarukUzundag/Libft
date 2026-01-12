# ifndef LIBFT_H
# define LIBFT_H

// #ifndef DOSYA_ADI_H → "DOSYA_ADI_H" makrosu daha önce tanımlanmamışsa devam et.
// #define DOSYA_ADI_H → Makroyu tanımla (ilk dahil edilmede çalışır).
// Dosya ikinci kez dahil edilmek istendiğinde #ifndef koşulu false olur ve içeriği atlanır.
// #endif ile blok sonlandırılır.
// Yani: Multiple definition’ı önlemek için.

# include <stdio.h>
# include <stdlib.h>
# include <string.h>

int ft_isalpha(int c);
int ft_isdigit(int c);
int ft_isalnum(int c);
int ft_isascii(int c);
int ft_isprint(int c);
int	ft_toupper(int c);
int	ft_tolower(int c);
int	ft_atoi(const char *str);

char    *ft_strrchr(const char *s, int c);
char    *ft_strchr(const char *s, int c);

size_t  ft_strlen(const char *s);
size_t  ft_strlcpy(char *dst, const char *src, size_t size);
size_t	ft_strlcat(char *dst, const char *src, size_t size);

void    *ft_memset (void *s, int c, size_t n);
void    ft_bzero(void *s, size_t n);
void    *ft_memcpy(void *dst, const void *src, size_t n);
void	*ft_memmove(void *dst, const void *src, size_t n);


#endif
