/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: auzundag <auzundag@student.42istanbul.com.tr  + +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/15 13:03:23 by auzundag          #+#    #+#             */
/*   Updated: 2026/01/29 11:04:45 by auzundag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	length_s;
	char	*substr;

	if (!s)
		return (NULL);
	length_s = ft_strlen(s);
	if (start >= length_s)
	{
		substr = malloc(1);
		if (substr)
			substr[0] = '\0';
		return (substr);
	}
	if (len > length_s - start)
		len = length_s - start;
	substr = malloc(len + 1);
	if (!substr)
		return (NULL);
	ft_memcpy(substr, s + start, len);
	substr[len] = '\0';
	return (substr);
}
