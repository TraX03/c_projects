/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xiwlim <xiwlim@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/04 14:34:38 by xiwlim            #+#    #+#             */
/*   Updated: 2025/11/04 15:08:21 by xiwlim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <fcntl.h>
#include <stdio.h>

int	main(int argc, char **argv)
{
	int		fd;
	int		count;
	char	*line;

	if (argc == 1)
		printf("File name missing.\n");
	else if (argc > 2)
		printf("Too many arguments.\n");
	else
	{
		fd = open(argv[1], O_RDONLY);
		if (fd == -1)
		{
			printf("Cannot read file.\n");
			return (0);
		}
		count = 23;
		while (count--)
		{
			line =  get_next_line(fd);
			printf("%s", line);
		}
		close(fd);
	}
}
