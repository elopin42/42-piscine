/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elopin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/29 02:59:56 by elopin            #+#    #+#             */
/*   Updated: 2024/08/31 19:33:56 by elopin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int	i;
	int	b;
	int	c;

	i = 0;
	b = 1;
	c = 0;
	while (str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
		i++;
	while (str[i] == 43 || str[i] == 45)
	{
		if (str[i] == 45)
			b = b * -1;
		i++;
	}
	while (str[i] >= 48 && str[i] <= 57)
	{
		c = c + (str[i] - '0');
		if (str[i + 1] >= 48 && str[i + 1] <= 57)
			c = c * 10;
		i++;
	}
	return (b * c);
}
/*#include <stdio.h>
int	main()
{
	printf("%d", ft_atoi("   +-+---5643267fgbhf564fdjksdkjdnjs"));
	return(0);
}*/
