/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okorkech <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/17 14:37:44 by okorkech          #+#    #+#             */
/*   Updated: 2025/10/17 16:27:00 by okorkech         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;
	char	*str;

	str = (char *) big;
	if (*little == '\0')
		return (str);
	i = 0;
	j = 0;
	while (i < len && str[i])
	{
		j = 0;
		if (str[i] == little[j])
		{
			while (i + j < len && str[i + j] == little[j])
				j++;
			if (little[j] == '\0')
				return (&str[i]);
		}
		i++;
	}
	return (NULL);
}
