/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okorkech <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/19 10:12:27 by okorkech          #+#    #+#             */
/*   Updated: 2025/10/19 10:12:30 by okorkech         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str_joined;
	size_t	len_str_joined;
	size_t	i;
	size_t	j;

	if (!s1 || !s2)
		return (NULL);
	len_str_joined = ft_strlen(s1)+ft_strlen(s2);
	str_joined = malloc(sizeof(char) * (len_str_joined + 1));
	if (!str_joined)
		return (NULL);
	i = 0;
	while (s1[i])
	{
		str_joined[i] = s1[i];
		i++;
	}
	j = 0;
	while (s2[j])
	{
		str_joined[i + j] = s2[j];
		j++;
	}
	str_joined[i + j] = '\0';
	return (str_joined);
}

/*
int		main(void)
{
	char *s1 = "123";
	char  *s2 = "";
	char *str_j = ft_strjoin(s1,s2);
	printf("%s",str_j);
	free(str_j);	
	return (0);
}
*/
