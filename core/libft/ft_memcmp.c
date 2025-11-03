/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xiwlim <xiwlim@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/27 13:11:14 by xiwlim            #+#    #+#             */
/*   Updated: 2025/10/27 15:30:56 by xiwlim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*str;
	const unsigned char	*str2;
	unsigned int		i;

	if (n == 0)
		return (0);
	i = 0;
	str = (const unsigned char *)s1;
	str2 = (const unsigned char *)s2;
	while (str[i] && str[i] == str2[i] && i < n - 1)
		i++;
	return (str[i] - str2[i]);
}
