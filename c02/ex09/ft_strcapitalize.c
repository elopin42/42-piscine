/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elopin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/26 00:10:45 by elopin            #+#    #+#             */
/*   Updated: 2024/08/26 22:42:24 by elopin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	ft_allin(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] -= 32;
		i++;
	}
	return (*str);
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	ft_allin(str);
	while (str[i])
	{
		if (((str[i - 1] >= 'a' && str[i - 1] <= 'z')
				|| (str[i - 1] >= 'A' && str[i - 1] <= 'Z')
				|| (str[i - 1] >= '0' && str[i - 1] <= '9'))
			&& (str[i] >= 'A' && str[i] <= 'Z'))
				str[i] += 32;
		i++;
	}
	return (str);
}
/*#include <stdio.h>

int	main()
{
	char c[50] = "testT dFRes 5Con hfurjYSJDCN";
	printf ("%s", ft_strcapitalize(c));
	return(0);
}*/
