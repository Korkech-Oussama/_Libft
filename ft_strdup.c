/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okorkech <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/18 11:25:52 by okorkech          #+#    #+#             */
/*   Updated: 2025/10/18 11:43:45 by okorkech         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*str_dup;
	size_t	s_len;

	s_len = ft_strlen(s) + 1;
	str_dup = malloc(sizeof(char) * s_len);
	if (!str_dup)
		return (NULL);
	ft_memcpy(str_dup, s, s_len);
	return (str_dup);
}
