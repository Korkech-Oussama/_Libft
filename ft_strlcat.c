/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okorkech <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 18:07:42 by okorkech          #+#    #+#             */
/*   Updated: 2025/10/16 19:44:30 by okorkech         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	dst_len;
	size_t	src_len;
	size_t	i;

	if (!dst || !src)
		return (0);
	dst_len = 0;
	src_len = ft_strlen(src);
	while (dst[dst_len] && dst_len < size)
		dst_len++;
	if (size <= dst_len)
		return (size + src_len);
	i = 0;
	while (src[i] && (dst_len + i) < size - 1)
	{
		dst[dst_len + i] = src[i];
		i++;
	}
	dst[dst_len + i] = '\0';
	return (dst_len + src_len);
}


/*
int main()
{
	char dst[10] = "llll";
	char src[10] = "kkkk";

	// printf("strlcat => %zu\n",strlcat(dst,src,3));
	// printf("dest [%s]\n",dst);

	printf("ft_strlcat => %zu\n", ft_strlcat(dst,src,3));
	printf("dest [%s]\n",dst);

}
*/