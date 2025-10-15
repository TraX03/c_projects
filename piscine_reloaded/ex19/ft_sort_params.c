/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xiwlim <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 16:43:42 by xiwlim            #+#    #+#             */
/*   Updated: 2025/10/14 13:44:46 by xiwlim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] != '\0' && s1[i] == s2[i])
		i++;
	return (s1[i] - s2[i]);
}

void	bubble_sort(char **av, int ac)
{
	int		swapped;
	int		i;
	char	*temp;

	swapped = 1;
	while (swapped)
	{
		swapped = 0;
		i = 1;
		while (i < ac - 1)
		{
			if (ft_strcmp(av[i], av[i + 1]) > 0)
			{
				temp = av[i];
				av[i] = av[i + 1];
				av[i + 1] = temp;
				swapped = 1;
			}
			i++;
		}
	}
}

int	main(int ac, char **av)
{
	int	i;

	if (ac > 1)
	{
		bubble_sort(av, ac);
		i = 1;
		while (i < ac)
		{
			while (*av[i])
				ft_putchar(*av[i]++);
			ft_putchar('\n');
			i++;
		}
	}
	return (0);
}
