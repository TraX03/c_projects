/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xiwlim <xiwlim@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/22 20:49:02 by xiwlim            #+#    #+#             */
/*   Updated: 2025/09/23 16:44:34 by xiwlim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (s1[i] - s2[i]);
}

/*#include <stdio.h>

int	main(void)
{
	printf("%d\n", ft_strcmp("hello", "hello"));
	printf("%d\n", ft_strcmp("hEllo", "hello"));
	printf("%d\n", ft_strcmp("hello", "hedlo"));
	printf("%d\n", ft_strcmp("hell", "hello"));
	return (0);
}*/
