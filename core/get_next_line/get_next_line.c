/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xiwlim <xiwlim@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/03 15:53:44 by xiwlim            #+#    #+#             */
/*   Updated: 2025/11/11 11:36:38 by xiwlim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <stdio.h>

char	*get_next_line(int fd)
{
	int			sz;
	int			again;	
	char		*line;
	static char	*stash;

	line = malloc(sizeof(char) * BUFFER_SIZE);
	if (!line)
		return (NULL);
	if (!stash)
		stash = ft_strdup(line);
	again = 1;
	while (again)
	{
		again = 0;
		sz = read(fd, line, BUFFER_SIZE);
		if (sz > 0)
		{
			stash = ft_strjoin(stash, line);
			if (!ft_strchr_nl(stash))
				again = 1;
		}
	}
	line = extract_line(stash);
	stash = ft_strchr_nl(stash);
	if (line)
		return (line);
	return (NULL);
}
