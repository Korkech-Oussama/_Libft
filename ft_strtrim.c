/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okorkech <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/19 12:29:28 by okorkech          #+#    #+#             */
/*   Updated: 2025/10/19 12:29:31 by okorkech         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int	char_in_set(const char *s, char c)
{
	size_t	i;

	i = 0;
	while (s[i])
	{
		if (s[i] == c)
			return (1);
		i++;
	}
	return (0);
}

static	size_t	find_start(char const *s1, char const *set)
{
	size_t	start;

	start = 0;
	while (s1[start])
	{
		if (!char_in_set(set, s1[start]))
			break ;
		start++;
	}
	return (start);
}

static	size_t	find_end(char const *s1, char const *set)
{
	size_t	end;

	end = ft_strlen(s1);
	if (end == 0)
		return (0);
	end--;
	while (end > 0 && char_in_set(set, s1[end]))
		end--;
	if (end == 0 && char_in_set(set, s1[0]))
		return ((size_t) - 1);
	return (end);
}
/*
	start is the index of the last character to keep the trimmed str
	end is the index of the first character to keep the trimmed str
*/

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	end;

	if (!s1 || !set)
		return (NULL);
	if (!*s1)
		return (ft_strdup(""));
	if (!*set)
		return (ft_strdup(s1));
	start = find_start(s1, set);
	end = find_end(s1, set);
	if (start > end || end == (size_t)-1)
		return (ft_strdup(""));
	return (ft_substr(s1, start, (end - start + 1)));
}
