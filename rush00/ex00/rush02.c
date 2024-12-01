/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lulmaruy < lulmaruy@student.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/17 09:47:39 by lulmaruy          #+#    #+#             */
/*   Updated: 2024/08/17 18:36:05 by lulmaruy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	putline(char left, char center, char right, int x)
{
	int	j;

	j = 1;
	while (j <= x)
	{
		if (j == 1)
			ft_putchar(left);
		else if (j == x)
			ft_putchar(right);
		else
			ft_putchar(center);
		j++;
	}
}

void	rush(int x, int y)
{
	int	i;

	i = 1;
	if (x == 0 || y == 0 || x == -2147483648 || y == -2147483648)
		write(1, "rien a afficher", 15);
	if (x < 0 || y < 0)
	{
		x = x * -1;
		y = y * -1;
	}
	while (i <= y)
	{
		if (i == 1)
			putline('A', 'B', 'A', x);
		else if (i == y)
			putline('C', 'B', 'C', x);
		else
			putline('B', ' ', 'B', x);
		ft_putchar('\n');
		i++;
	}
}
