#include "libft.h"

void *ft_memmove(void *dst, const void *src, size_t n)
{
    if (!dst && !src)
        return NULL;

    if (dst < src)
        ft_memcpy(dst, src, n);
    else
    {
        while (n > 0)
        {
            n--;
            ((unsigned char *)dst)[n] = ((unsigned char *)src)[n];
        }
    }
    return dst;
}

int main()
{
    char src[] = "Geeks";

    ft_memmove(src + 1, src, sizeof(src));

    printf("str2 benim memcpy:\n");
    printf("%s", src);

    return 0;
}

// Kopyalama işlemi,
// src'deki baytların önce src veya dest ile üst üste gelmeyen geçici bir diziye kopyalanması ve ardından baytların geçici diziden dest'e kopyalanması şeklinde gerçekleşir.

// RETURN VALUE
//        The memmove() function returns a pointer to dest.