/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okorkech <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/17 16:33:33 by okorkech          #+#    #+#             */
/*   Updated: 2025/10/18 10:15:21 by okorkech         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *nptr)
{
	size_t		j;
	int			res;
	int			sign;

	j = 0;
	sign = 1;
	res = 0;
	while (nptr && ((nptr[j] >= 9 && nptr[j] <= 13) || (nptr[j] == 32)))
		j++;
	if (nptr && (nptr[j] == '-' || nptr[j] == '+'))
	{
		if (nptr && (nptr[j] == '-'))
			sign = -1;
		j++;
	}
	while (nptr && ft_isdigit(nptr[j]))
	{
		if (res > INT_MAX / 10)
			return (-1);
		res = res * 10 + (nptr[j] - '0');
		j++;
	}
	return (res * sign);
}
