/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xiwlim <xiwlim@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/30 11:16:41 by xiwlim            #+#    #+#             */
/*   Updated: 2025/09/30 11:21:18 by xiwlim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int	i;

	i = 1;
	if (argc > 1)
	{
		while (argv[argc - i] && (argc - i != 0))
		{
			while (*argv[argc - i] != '\0')
			{
				write(1, argv[argc - i], 1);
				argv[argc - i]++;
			}
			write(1, "\n", 1);
			i++;
		}
	}
	return (0);
}
