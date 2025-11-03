/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xiwlim <xiwlim@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/28 11:00:23 by xiwlim            #+#    #+#             */
/*   Updated: 2025/10/28 13:14:08 by xiwlim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	count_words(char const *s, char c)
{
	size_t	count;
	int		in_word;

	count = 0;
	in_word = 0;
	while (*s)
	{
		if (*s != c && in_word == 0)
		{
			count++;
			in_word = 1;
		}
		else if (*s == c)
			in_word = 0;
		s++;
	}
	return (count);
}

static void	free_all(char **arr, size_t i)
{
	while (i > 0)
		free(arr[--i]);
	free(arr);
}

static char	**populate(char **holder, char const *s, char c)
{
	size_t	start;
	size_t	end;
	size_t	i;

	i = 0;
	start = 0;
	while (s[start])
	{
		while (s[start] == c)
			start++;
		end = start;
		while (s[end] && s[end] != c)
			end++;
		if (end > start)
		{
			holder[i] = ft_substr(s, start, end - start);
			if (!holder[i])
				return (free_all(holder, i), NULL);
			i++;
		}
		start = end;
	}
	holder[i] = NULL;
	return (holder);
}

char	**ft_split(char const *s, char c)
{
	char	**holder;

	holder = malloc(sizeof(char *) * (count_words(s, c) + 1));
	if (!holder)
		return (NULL);
	holder = populate(holder, s, c);
	return (holder);
}
