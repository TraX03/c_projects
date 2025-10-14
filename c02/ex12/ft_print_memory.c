/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_memory.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xiwlim <xiwlim@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/23 14:27:53 by xiwlim            #+#    #+#             */
/*   Updated: 2025/09/29 10:14:43 by xiwlim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_address(unsigned long addr)
{
	char	*base;
	char	str[16];
	int		i;

	i = 15;
	base = "0123456789abcdef";
	while (i >= 0)
	{
		str[i] = base[addr % 16];
		addr /= 16;
		i--;
	}
	write(1, str, 16);
}

void	print_hex(unsigned char c)
{
	char	*base;

	base = "0123456789abcdef";
	write(1, &base[c / 16], 1);
	write(1, &base[c % 16], 1);
}

void	populate_info(unsigned int i, unsigned char *c, unsigned int size)
{
	unsigned int	j;

	j = 0;
	while (j < 16)
	{
		if (i + j < size)
			print_hex(c[i + j]);
		else
			write(1, "  ", 2);
		if (j % 2 == 1)
			write(1, " ", 1);
		j++;
	}
	j = 0;
	while (j < 16 && i + j < size)
	{
		if (c[i + j] >= 32 && c[i + j] <= 126)
			write(1, &c[i + j], 1);
		else
			write(1, ".", 1);
		j++;
	}
}

void	*ft_print_memory(void *addr, unsigned int size)
{
	unsigned int	i;
	unsigned char	*c;

	if (size == 0)
		return (addr);
	c = (unsigned char *)addr;
	i = 0;
	while (i < size)
	{
		print_address((unsigned long)(c + i));
		write(1, ": ", 2);
		populate_info(i, c, size);
		write(1, "\n", 1);
		i += 16;
	}
	return (addr);
}

/*int	main(void)
{
	char	str[] = "Bonjour les aminches\n\t\nc\n est ";
	//fou\ttout\tce qu on peut faire avec.\n\tprint_memory\n\n\t\nlol.lol\n ;

	ft_print_memory(str, sizeof(str));
	return (0);
}*/
