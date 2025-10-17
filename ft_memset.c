/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okorkech <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 13:25:46 by okorkech          #+#    #+#             */
/*   Updated: 2025/10/15 12:04:40 by okorkech         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*memory_area;

	memory_area = (unsigned char *) s;
	i = 0;
	while (i < n)
	{
		memory_area[i] = (unsigned char) c;
		i++;
	}
	return (s);
}
