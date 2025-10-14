/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xiwlim <xiwlim@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/22 17:52:13 by xiwlim            #+#    #+#             */
/*   Updated: 2025/09/22 18:16:16 by xiwlim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	is_alpha(char c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	new_word;

	i = 0;
	new_word = 1;
	while (str[i])
	{
		if (str[i] >= 'a' && str[i] <= 'z' && new_word)
			str[i] -= 32;
		else if (str[i] >= 'A' && str[i] <= 'Z' && !new_word)
			str[i] += 32;
		if (is_alpha(str[i]) || (str[i] >= '0' && str[i] <= '9'))
			new_word = 0;
		else
			new_word = 1;
		i++;
	}
	return (str);
}

/*int	main(void)
{
	char	test[] = "hi, how are you? 42words forty-two; fifty+and+one";
	char	*mesg;

	mesg = ft_strcapitalize(test);
	printf("%s", mesg);
	return (0);
}*/
