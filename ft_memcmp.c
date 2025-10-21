/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okorkech <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/17 12:09:57 by okorkech          #+#    #+#             */
/*   Updated: 2025/10/17 13:12:03 by okorkech         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*mem_area1;
	const unsigned char	*mem_area2;

	mem_area1 = (const unsigned char *) s1;
	mem_area2 = (const unsigned char *) s2;
	while (n > 0 && *mem_area1 == *mem_area2)
	{
		mem_area1++;
		mem_area2++;
		n--;
	}
	if (n == 0)
		return (0);
	return (*mem_area1 - *mem_area2);
}
