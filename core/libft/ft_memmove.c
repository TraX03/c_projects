/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xiwlim <xiwlim@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 14:51:16 by xiwlim            #+#    #+#             */
/*   Updated: 2025/10/27 15:29:47 by xiwlim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t				i;
	unsigned char		*ptr;
	const unsigned char	*s;

	ptr = (unsigned char *)dest;
	s = (const unsigned char *)src;
	i = 0;
	if (ptr > s)
	{
		while (n--)
			ptr[n] = s[n];
	}
	else
		ft_memcpy(ptr, s, n);
	return (dest);
}
