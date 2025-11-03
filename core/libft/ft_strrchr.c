/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xiwlim <xiwlim@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/27 11:25:47 by xiwlim            #+#    #+#             */
/*   Updated: 2025/10/27 15:31:15 by xiwlim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrchr(const char *s, int c)
{
	unsigned char	uc;
	const char		*last;

	uc = (unsigned char)c;
	while (*s)
	{
		if ((unsigned char)*s == uc)
			last = s;
		s++;
	}
	if (uc == '\0')
		return ((char *)s);
	return ((char *)last);
}
