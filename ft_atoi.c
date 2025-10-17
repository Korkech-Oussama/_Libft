/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okorkech <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/17 16:33:33 by okorkech          #+#    #+#             */
/*   Updated: 2025/10/17 18:20:32 by okorkech         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	ft_atoi(const char *nptr)
{
	size_t		j;
	int	res;
	int	sign;

	j = 0;
	sign = 1;
	res = 0;
	while ((nptr[j] >= 9 && nptr[j] <= 13) || (nptr[j] == 32))
		j++;
	
	if (nptr[j] == '-' || nptr[j] == '+')
	{
		if (nptr[j] == '-')
			sign = -1;
		j++;
	}
	while (ft_isdigit(nptr[j]))
	{	
		res = res * 10 + (nptr[j] - '0');
		j++;
	}
	return (res * sign);
}
/*
int	main(void)
{
	int res = ft_atoi("--123");
	printf("%d\n",res);
	return (0);
}
*/
