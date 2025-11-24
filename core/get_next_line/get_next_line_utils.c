/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xiwlim <xiwlim@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/04 14:31:36 by xiwlim            #+#    #+#             */
/*   Updated: 2025/11/04 14:32:57 by xiwlim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

size_t	ft_strlen(const char *str)
{
	int	count;

	count = 0;
	while (*str++)
		count++;
	return (count);
}

char	*ft_strchr_nl(const char *s)
{
	while (*s)
	{
		if (*s == '\n')
			return ((char *)++s);
		s++;
	}
	return (NULL);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	total;
	size_t	i;
	char	*result;

	total = ft_strlen(s1) + ft_strlen(s2);
	result = (char *)malloc(sizeof(char) * (total + 1));
	if (!result)
		return (NULL);
	i = 0;
	while (*s1)
		result[i++] = *s1++;
	while (*s2)
		result[i++] = *s2++;
	result[i] = '\0';
	return (result);
}

char	*ft_strdup(const char *s)
{
	size_t			len;
	size_t			i;
	char			*result;

	len = ft_strlen(s);
	result = (char *)malloc(sizeof(char) * len + 1);
	if (!result)
		return (NULL);
	i = 0;
	while (s[i])
	{
		result[i] = s[i];
		i++;
	}
	result[i] = '\0';
	return (result);
}

char	*extract_line(char *s)
{
	int		count;
	char	*line;
	char	*temp;

	count = 0;
	while (s[count])
	{
		count++;
		if (s[count] == '\n')
		{
			count++;
			break ;
		}
	}
	line = malloc(sizeof(char) * count + 1);
	if (!line)
		return (NULL);
	line[count + 1] = '\0';
	temp = line;
	while (count--)
		*temp++ = *s++;
	return (line);
}
