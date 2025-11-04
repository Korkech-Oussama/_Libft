/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okorkech <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 20:38:31 by okorkech          #+#    #+#             */
/*   Updated: 2025/10/20 20:38:35 by okorkech         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	word_count(char const *s, char c)
{
	size_t	i;
	int		counter;

	i = 0;
	counter = 0;
	while (s[i])
	{
		while (s[i] && s[i] == c)
			i++;
		if (s[i])
		{
			counter++;
			while (s[i] && s[i] != c)
				i++;
		}
	}
	return (counter);
}

static	char	**empty_s(void)
{
	char	**arr_v;

	arr_v = malloc(sizeof(char *));
	if (!arr_v)
		return (NULL);
	arr_v[0] = NULL;
	return (arr_v);
}

static void	free_all(char **arr, size_t j)
{
	while (j > 0)
		free(arr[--j]);
	free(arr);
}

static	char	**fill_arr_v(char **arr_v, char const *s, char c)
{
	size_t	i;
	size_t	j;
	size_t	start;

	i = 0;
	j = 0;
	while (s[i])
	{
		while (s[i] && s[i] == c)
			i++;
		start = i;
		while (s[i] && s[i] != c)
			i++;
		if (i > start)
		{
			arr_v[j] = ft_substr(s, start, (i - start));
			if (!arr_v[j])
			{
				free_all(arr_v, j);
				return (NULL);
			}
			j++;
		}
	}
	return (arr_v);
}

char	**ft_split(char const *s, char c)
{
	char	**arr_v;
	size_t	arr_c;

	if (!s || !*s)
		return (empty_s());
	arr_c = word_count(s, c);
	arr_v = malloc(sizeof(char *) * (arr_c + 1));
	if (!arr_v)
		return (NULL);
	arr_v[arr_c] = NULL;
	arr_v = fill_arr_v(arr_v, s, c);
	return (arr_v);
}
