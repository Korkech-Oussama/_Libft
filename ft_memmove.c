/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okorkech <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 20:25:01 by okorkech          #+#    #+#             */
/*   Updated: 2025/10/17 08:48:58 by okorkech         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*d;
	unsigned char	*s;

	if (!src && !dest)
		return (NULL);
	d = (unsigned char *) dest;
	s = (unsigned char *) src;
	if (dest == src)
		return (dest);
	if (dest < src)
		return (ft_memcpy(dest, src, n));
	else
		while (n--)
			d[n] = s[n];
	return (dest);
}
#include <string.h>

// int	main(void)
// {
// 	char *buff = "  66";
// 	char *src =  "123";
//  	memmove(buff,buff+2,3);
// 	return (0);
// }