/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elopin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/15 21:03:54 by elopin            #+#    #+#             */
/*   Updated: 2024/08/18 23:30:28 by elopin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print(char a, char b, char c)
{
	write(1, &a, 1);
	write(1, &b, 1);
	write(1, &c, 1);
	if (!(a == '7' && b == '8' && c == '9'))
	{
		write(1, ", ", 2);
	}
}

void	ft_print_comb(void)
{
	char	a;
	char	b;
	char	c;

	a = '0';
	while (a <= 55)
	{
	b = a + 1;
		while (b <= 56)
		{
		c = b + 1;
			while (c <= 57)
			{
				print(a, b, c);
				c++;
			}
			b++;
		}
		a++;
	}
}
//int main(void)
//{
//	ft_print_comb();
//	return(0);
//}
