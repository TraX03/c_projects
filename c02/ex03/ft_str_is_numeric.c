/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xiwlim <xiwlim@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/17 20:38:41 by xiwlim            #+#    #+#             */
/*   Updated: 2025/09/22 17:11:37 by xiwlim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_str_is_numeric(char *str)
{
	while (*str != '\0')
	{
		if (!(*str >= '0' && *str <= '9'))
			return (0);
		str++;
	}
	return (1);
}

/*int	main(void)
{
	if (ft_str_is_numeric("12334"))
		printf("1: Its number\n");
	if (ft_str_is_numeric("as334"))
		printf("2: Its number\n");
	if (ft_str_is_numeric("sadadas"))
		printf("3: Its number\n");
	if (ft_str_is_numeric(""))
		printf("4: Its number");
	return (0);
}*/
