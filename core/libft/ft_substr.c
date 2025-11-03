/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xiwlim <xiwlim@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/27 15:33:05 by xiwlim            #+#    #+#             */
/*   Updated: 2025/10/27 16:07:36 by xiwlim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char		*sub;
	size_t		i;
	size_t		slen;

	if (!s)
		return (NULL);
	slen = ft_strlen(s);
	if (start > slen)
		return (NULL);
	if (len > slen - start)
		len = slen - start;
	sub = malloc(sizeof(char *) * (len + 1));
	if (!sub)
		return (NULL);
	i = 0;
	while (len--)
	{
		sub[i] = s[start + i];
		i++;
	}
	sub[i] = '\0';
	return (sub);
}
