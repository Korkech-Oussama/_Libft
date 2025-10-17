/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okorkech <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/17 09:24:22 by okorkech          #+#    #+#             */
/*   Updated: 2025/10/17 11:17:53 by okorkech         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*memory_area;
	size_t			i;

	c = (unsigned char ) c;
	memory_area = (unsigned char *) s;
	i = 0;
	while (i < n)
	{
		if (*memory_area == c)
			return (memory_area);
		i++;
		memory_area++;
	}
	return (NULL);
}
/*
int	main(void)
{
	char  buff[10] = {0};
	buff[5] = 'A';
	char *p = (char *)ft_memchr(buff,65,6);
	printf("%p\n",p);
	return (0);
}
*/
