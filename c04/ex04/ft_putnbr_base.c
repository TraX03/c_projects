/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xiwlim <xiwlim@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/25 15:11:29 by xiwlim            #+#    #+#             */
/*   Updated: 2025/10/01 18:15:13 by xiwlim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (*str)
	{
		len++;
		str++;
	}
	return (len);
}

int	is_valid_base(char *str, int len)
{
	int	i;
	int	j;

	if (len < 2)
		return (0);
	i = 0;
	while (i < len)
	{
		if (str[i] == '+' || str[i] == '-')
			return (0);
		j = i + 1;
		while (j < len)
		{
			if (str[i] == str[j])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int		len;
	long	n;
	char	c;

	len = ft_strlen(base);
	n = nbr;
	if (!is_valid_base(base, len))
		return ;
	if (n < 0)
	{
		write(1, "-", 1);
		n = -n;
	}
	if (n >= len)
		ft_putnbr_base(n / len, base);
	c = base[n % len];
	write(1, &c, 1);
}

/*int	main(void)
{
	ft_putnbr_base(42, "01"); //101010
	write(1, "\n", 1);
	ft_putnbr_base(255, "0123456789"); //255
	write(1, "\n", 1);
	ft_putnbr_base(-255, "0123456789ABCDEF"); //-FF
	write(1, "\n", 1);
	ft_putnbr_base(-42, "poneyvif"); //-vn
	write(1, "\n", 1);
	ft_putnbr_base(123, "");
	ft_putnbr_base(123, "0");
}*/
