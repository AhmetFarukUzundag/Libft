/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: auzundag <auzundag@student.42istanbul.com.tr  + +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/14 12:47:26 by auzundag          #+#    #+#             */
/*   Updated: 2026/01/29 11:04:34 by auzundag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	k;

	if (little[0] == '\0')
		return ((char *)big);
	i = 0;
	while (big[i] && i < len)
	{
		k = 0;
		while ((i + k) < len && little[k] && big[i + k] == little[k])
		{
			if (little[k + 1] == '\0')
				return ((char *)&big[i]);
			k++;
		}
		i++;
	}
	return (NULL);
}
