/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xiwlim <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 13:19:46 by xiwlim            #+#    #+#             */
/*   Updated: 2025/10/15 13:50:50 by xiwlim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <unistd.h>

void	print_err(char *str)
{
	int		count;
	char	*start;

	count = 0;
	start = str;
	while (*str++)
		count++;
	write(2, start, count);
}

void	print_content(int fd)
{
	int		loop;
	int		sz;
	char	*buf[50];

	loop = 1;
	while (loop)
	{
		loop = 0;
		sz = read(fd, buf, sizeof(buf));
		if (sz > 0)
		{
			write(1, buf, sz);
			loop = 1;
		}
	}
}

int	main(int argc, char **argv)
{
	int		fd;

	if (argc == 1)
		print_err("File name missing.\n");
	else if (argc > 2)
		print_err("Too many arguments.\n");
	else
	{
		fd = open(argv[1], O_RDONLY);
		if (fd == -1)
		{
			print_err("Cannot read file.\n");
			return (0);
		}
		print_content(fd);
		close(fd);
	}
	return (0);
}
