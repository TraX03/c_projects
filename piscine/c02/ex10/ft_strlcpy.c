/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xiwlim <xiwlim@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/22 20:30:43 by xiwlim            #+#    #+#             */
/*   Updated: 2025/09/23 14:01:30 by xiwlim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	int				src_len;
	unsigned int	i;

	src_len = 0;
	while (src && src[src_len])
		src_len++;
	if (size == 0)
		return (src_len);
	i = 0;
	while (i < size - 1 && src && src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (src_len);
}

/*#include <stdio.h>

int	main(void)
{
	char	dest[6];
	unsigned int	len;

	len = ft_strlcpy(dest, "Hellow world!", sizeof(dest));
	printf("dest: %s, len: %d", dest, len);
	return (0);
}*/
