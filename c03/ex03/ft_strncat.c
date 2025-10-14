/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xiwlim <xiwlim@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/23 17:25:54 by xiwlim            #+#    #+#             */
/*   Updated: 2025/09/23 17:33:13 by xiwlim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	int		i;
	char	*start;

	i = 0;
	start = dest;
	while (*dest != '\0')
		dest++;
	while (i < nb && src[i] != '\0')
	{
		*dest = src[i];
		dest++;
		i++;
	}
	*dest = '\0';
	return (start);
}

/*#include <stdio.h>

int	main(void)
{
	char	test[20] = "hellow";

	ft_strncat(test, "worlddd!", 5);
	printf("%s", test);
	return (0);
}*/
