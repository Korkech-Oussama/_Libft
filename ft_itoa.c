/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okorkech <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 12:26:14 by okorkech          #+#    #+#             */
/*   Updated: 2025/10/21 12:26:17 by okorkech         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	size_t	len_calculation(int n)
{
	size_t	len;
	long	num;

	num = n;
	len = 0;
	if (num == 0)
		len = 1;
	else if (num < 0)
	{
		len = 1;
		num = num * (-1);
	}
	while (num)
	{
		num /= 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	char	*str;
	size_t	len;
	long	num;

	num = n;
	len = len_calculation(n);
	str = malloc(sizeof(char) * (len + 1));
	if (!str)
		return (NULL);
	if (num < 0)
	{
		str[0] = '-';
		num = num * (-1);
	}
	str[len] = '\0';
	while (len > 0)
	{
		if (n < 0 && len == 1)
			break ;
		str[len - 1] = (num % 10) + '0';
		num /= 10;
		len--;
	}
	return (str);
}
