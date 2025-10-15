/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xiwlim <xiwlim@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/17 20:48:19 by xiwlim            #+#    #+#             */
/*   Updated: 2025/09/17 20:48:23 by xiwlim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_str_is_printable(char *str)
{
	while (*str)
	{
		if (!(*str >= 32 && *str <= 126))
			return (0);
		str++;
	}
	return (1);
}

/*int	main(void)
{
	if(ft_str_is_printable("\n"))
		printf("1: Is printable");
	if(ft_str_is_printable("2131kjhkasd asdada"))
		printf("2: Is printable");
	return (0);
}*/
