/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xiwlim <xiwlim@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/17 20:40:54 by xiwlim            #+#    #+#             */
/*   Updated: 2025/09/22 17:15:29 by xiwlim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_str_is_lowercase(char *str)
{
	while (*str != '\0')
	{
		if (!(*str >= 'a' && *str <= 'z'))
			return (0);
		str++;
	}
	return (1);
}

/*int	main(void)
{
	if(ft_str_is_lowercase("asdsda"))
		printf("1: Is lowercase\n");
	if(ft_str_is_lowercase("asAsda"))
		printf("2: Is lowercase\n");
	if (ft_str_is_lowercase("sa23adas"))
		printf("3: Is lowercase\n");
	if (ft_str_is_lowercase(""))
		printf("4: Is lowercase");
	return (0);
}*/
