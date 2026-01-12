#include <stddef.h>
#include <stdio.h>

char *ft_strchr(const char *s, int c)
{
    int i = 0;
    while (s[i])
    {
        if (s[i] == (char)c)
            return (char *)&s[i];
        i++;
    }

    if ((char)c == '\0')
        return (char *)&s[i];
    return NULL;
}

// int main()
// {
//     char arr[] = "Hello";
//     char *p = ft_strchr(arr, 'e');
//     printf("%c", (char)*p);
// }