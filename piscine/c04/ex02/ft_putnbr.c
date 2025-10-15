/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xiwlim <xiwlim@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/23 20:21:48 by xiwlim            #+#    #+#             */
/*   Updated: 2025/09/23 20:32:55 by xiwlim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int nb)
{
	char	c;
	long	n;

	n = nb;
	if (n < 0)
	{
		write(1, "-", 1);
		n = -n;
	}
	if (n >= 10)
		ft_putnbr(n / 10);
	c = (n % 10) + '0';
	write(1, &c, 1);
}

/*int	main(void)
{
	ft_putnbr(-32);
	write(1, "\n", 1); 
	ft_putnbr(22);
	write(1, "\n", 1); 
	ft_putnbr(0);
	write(1, "\n", 1); 
	ft_putnbr(5);
	return (0);
}*/
