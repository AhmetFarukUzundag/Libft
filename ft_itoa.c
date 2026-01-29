/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: auzundag <auzundag@student.42istanbul.com.tr  + +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/21 16:38:44 by auzundag          #+#    #+#             */
/*   Updated: 2026/01/29 10:53:12 by auzundag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*negative_number(long nb)
{
	long	len;
	char	*result;
	long	temp;

	temp = -nb;
	nb = -nb;
	len = 0;
	while (nb != 0)
	{
		nb /= 10;
		len++;
	}
	result = malloc(sizeof(char) * (len + 2));
	if (!result)
		return (NULL);
	result[len + 1] = '\0';
	result[0] = '-';
	while (len > 0)
	{
		result[len--] = temp % 10 + '0';
		temp /= 10;
	}
	return (result);
}

static char	*zero_number(long nb)
{
	char	*result;

	result = malloc(sizeof(char) * 2);
	if (!result)
		return (NULL);
	result[0] = nb + '0';
	result[1] = '\0';
	return (result);
}

static char	*pozitive_number(long nb)
{
	long	len;
	char	*result;
	long	temp;

	temp = nb;
	len = 0;
	while (nb != 0)
	{
		nb /= 10;
		len++;
	}
	result = malloc(sizeof(char) * (len + 1));
	if (!result)
		return (NULL);
	result[len] = '\0';
	while (len > 0)
	{
		result[--len] = temp % 10 + '0';
		temp /= 10;
	}
	return (result);
}

char	*ft_itoa(int n)
{
	long	nb;

	nb = n;
	if (n < 0)
		return (negative_number(nb));
	if (n == 0)
		return (zero_number(nb));
	return (pozitive_number(nb));
}
