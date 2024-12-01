/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elopin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/19 16:14:50 by elopin            #+#    #+#             */
/*   Updated: 2024/08/19 22:18:41 by elopin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	tmp;
	int	tmp2;

	tmp2 = 0;
	while (tmp2 < size - 1)
	{
		tmp = tab[tmp2];
		tab[tmp2] = tab[size - 1];
		tab[size - 1] = tmp ;
		tmp2++;
		size--;
	}
}
//#include <stdio.h>
//
//void	ft_rev_int_tab(int *tab, int size);
//
//int		main(void)
//{
//	int tab[10] = {0,1,2,3,4,5};
//
//	printf("9,8,7,6,5,4,3,2,1,0:");
//	ft_rev_int_tab(tab, 10);
//	printf("%d,%d,%d,%d,%d", tab[0], tab[1], tab[2], tab[3], tab[4], tab[5]);
//}
