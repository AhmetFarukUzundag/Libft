#include <stdlib.h>
#include <stdio.h>

char *ft_strrchr(const char *s, int c)
{
    char *last = NULL;
    int i = 0;

    while (s[i])
    {
        if (s[i] == (char)c)
            last = (char *)&s[i];
        i++;
    }

    if ((char)c == '\0')
        return (char *)&s[i];

    return last;
}

int main()
{

    char arr[] = "Hello";
    char *p = ft_strrchr(arr, 101);
    printf("%d", (char)*p);
}

// char *ft_strrchr(const char *s, int c)
// {
//     char *last = NULL;

//     while (*s)
//     {
//         if (*s == (char)c)
//             last = (char *)s;
//         s++;
//     }

//     if ((char)c == '\0')
//         return (char *)s;

//     return last;
// }
