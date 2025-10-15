/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xiwlim <xiwlim@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/17 20:30:11 by xiwlim            #+#    #+#             */
/*   Updated: 2025/09/22 17:04:05 by xiwlim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_str_is_alpha(char *str)
{
	while (*str != '\0')
	{
		if (!((*str >= 'A' && *str <= 'Z')
				|| (*str >= 'a' && *str <= 'z')))
			return (0);
		str++;
	}
	return (1);
}

/*int	main(void)
{
	if (ft_str_is_alpha("hello"))
		printf("1: Is alphabet! :D\n");
	if (ft_str_is_alpha("12345"))
		printf("2: Is alphabet! :D\n");
	if (ft_str_is_alpha("12as4"))
		printf("3: Is alphabet! :D\n");
	if (ft_str_is_alpha(""))
		printf("4: Is alphabet! :D\n");
	return (0);	
}*/
