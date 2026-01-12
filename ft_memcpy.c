#include "libft.h"

void    *ft_memcpy(void *dst, const void *src, size_t n)
{
    size_t i;

    if (!dst && !src)
        return NULL;

    i = 0;
    while (i < n)
    {
        ((unsigned char *)dst)[i] = ((const unsigned char *)src)[i];
        i++;
    }
    return dst;
}

int main()
{
    char dst[] = "Geekssss";
    char src[6] = "";

    // Copies contents of str1 to str2
    ft_memcpy(dst, src, 50);
    // void *dst, const void *src, size_t n

    printf("str2 benim memcpy:");
    printf("%s", src);

    return 0;
}
// void	*ft_memcpy(void *dst, const void *src, size_t n)
// {
    
// }

// memcpy() fonksiyonu, n baytı src bellek alanından dest bellek alanına kopyalar. Bellek alanları üst üste gelmemelidir.
// Bellek alanları üst üste geliyorsa memmove(3) kullanın.


// RETURN VALUE
//        The memcpy() function returns a pointer to dest.

