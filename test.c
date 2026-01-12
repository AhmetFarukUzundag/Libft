#include <ctype.h>
#include <stdio.h>
#include "libft.h"
#include <string.h>

int main(void)
{
	// printf("%d\n", isalpha('c'));
	// printf("%d\n", ft_isalpha('c'));

	// printf("%d\n", isdigit('a'));
	// printf("%d\n", ft_isdigit('a'));

	// printf("%d\n", isalnum('a'));
	// printf("%d\n", ft_isalnum('a'));

	// printf("%d\n", ft_isascii('a'));

	// printf("%zu\n", strlen("abc"));

	// Initialize a variable
	// int a = 20;
	// int b = 10;

	// printf("Value of b before calling memcpy: %d\n", b);

	// // Use memcpy to copy the value of 'a' into 'b'
	// memcpy(&b, &a, sizeof(int));

	// printf("Value of b after calling memcpy: %d\n", b);

	char str1[] = "Geeks";
	char str2[6] = "";
	
	// Copies contents of str1 to str2
	ft_memmove(str2, str1, sizeof(str1));
	// void *dst, const void *src, size_t n

	printf("str2 benim memcpy:");
	printf("%s", str2);

	return 0;
}