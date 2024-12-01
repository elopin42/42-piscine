/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elopin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/01 04:09:25 by elopin            #+#    #+#             */
/*   Updated: 2024/09/01 17:39:03 by elopin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	i;
	int	s;

	i = 1;
	s = 1;
	if (nb < 0)
		return (0);
	while (i <= nb)
	{
		s = s * i;
		i++;
	}
	return (s);
}
/*#include <stdio.h>
int	main()
{
	printf("%d", ft_iterative_factorial(0));
	return(0);
}*/
