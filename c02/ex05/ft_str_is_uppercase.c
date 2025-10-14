/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xiwlim <xiwlim@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/17 20:44:08 by xiwlim            #+#    #+#             */
/*   Updated: 2025/09/17 20:44:52 by xiwlim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_str_is_uppercase(char *str)
{
	while (*str != '\0')
	{
		if (!(*str >= 'A' && *str <= 'Z'))
			return (0);
		str++;
	}
	return (1);
}

/*int	main(void)
{
	if(ft_str_is_uppercase("ADEFFFDF"))
		printf("1: Is uppercase");
	if(ft_str_is_uppercase("asAsda"))
		printf("2: Is uppercase");
	if(ft_str_is_uppercase("12312313"))
		printf("3: Is uppercase");
	if(ft_str_is_uppercase(""))
		printf("4: Is uppercase");
	return (0);
}*/
