/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xiwlim <xiwlim@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/23 17:34:14 by xiwlim            #+#    #+#             */
/*   Updated: 2025/09/23 18:03:19 by xiwlim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	char	*haystack;
	char	*needle;
	char	*h;

	if (*to_find == '\0')
		return (str);
	haystack = str;
	while (*haystack != '\0')
	{
		needle = to_find;
		h = haystack;
		while (*h && *needle && *h == *needle)
		{
			needle++;
			h++;
		}
		if (*needle == '\0')
			return (haystack);
		haystack++;
	}
	return (0);
}

/*#include <stdio.h>

int	main(void)
{
	char *pos;

	pos = ft_strstr("Idk what to writemaybeapple hrehehhe", "apple");
	printf("%s", pos);
}*/
