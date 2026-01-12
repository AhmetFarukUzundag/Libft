#include <stddef.h>
#include <stdio.h>

size_t ft_strlen(const char *s);

size_t ft_strlcat(char *dst, const char *src, size_t size)
{
    size_t i;
    size_t dst_len;
    size_t src_len;

    dst_len = ft_strlen(dst);
    src_len = ft_strlen(src);

    if (dst_len >= size) // Ben yazamadım ama eğer yazabilseydim toplam uzunluk BU olurdu.
        return size + src_len;

    i = 0;
    while (src[i] && (dst_len + i + 1) < size)
    {
        dst[dst_len + i] = src[i];
        i++;
    }
    dst[dst_len + i] = '\0';

    return dst_len + src_len;
}

// int main()
// {
//     char buf[6] = "Hel";
//     size_t result = ft_strlcat(buf, "World", 5);
//     printf("%ld result: ", result);
//     printf("%s", buf);
// }
