/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xiwlim <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 13:45:26 by xiwlim            #+#    #+#             */
/*   Updated: 2025/10/14 13:49:34 by xiwlim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	count;

	count = 0;
	while (*str)
	{
		count++;
		str++;
	}
	return (count);
}

char	*ft_strdup(char *src)
{
	int		len;
	char	*result;
	char	*start;

	len = ft_strlen(src);
	result = malloc(sizeof(char) * len + 1);
	if (!result)
		return (0);
	start = result;
	while (*src)
		*result++ = *src++;
	*result = '\0';
	return (start);
}
