/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xiwlim <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 13:49:59 by xiwlim            #+#    #+#             */
/*   Updated: 2025/10/14 14:05:29 by xiwlim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	intlen(int min, int max)
{
	int	count;

	count = 0;
	while (min < max)
	{
		count++;
		min++;
	}
	return (count);
}

int	*ft_range(int min, int max)
{
	int	*result;
	int	*start;
	int	len;

	if (min >= max)
		return (NULL);
	len = intlen(min, max);
	result = malloc(sizeof(int) * len);
	if (!result)
		return (0);
	start = result;
	while (min < max)
	{
		*result = min;
		result++;
		min++;
	}
	return (start);
}
