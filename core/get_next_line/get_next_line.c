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
	static char	*stash;
	char		*buf;
	char		*line;
	int			sz;

	if (fd < 0 || BUFFER_SIZE <= 0)
		return (NULL);
	if (!stash)
		stash = ft_strdup("");
	buf = malloc(sizeof(char) * BUFFER_SIZE + 1);
	if (!buf)
		return (NULL);
	sz = 1;
	while (!ft_strchr(stash, '\n') && sz > 0)
	{
		sz = read(fd, buf, BUFFER_SIZE);
		if (sz < 0)
			return (free(buf), NULL);
		buf[sz] = '\0';
		stash = ft_strjoin(stash, buf);
	}
	free(buf);
	line = split_line(stash, &stash);
	return (line);
}
