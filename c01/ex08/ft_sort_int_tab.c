/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elopin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/19 22:21:29 by elopin            #+#    #+#             */
/*   Updated: 2024/08/19 23:51:29 by elopin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	tmp;

	i = 0;
	while (i < size)
	{
		if (tab[i] > tab[i + 1])
		{
			tmp = tab[i];
			tab[i] = tab[i + 1];
			tab[i + 1] = tmp;
			i = 0;
		}
		i++;
	}
}
//#include <stdio.h>
//
//void	ft_sort_int_tab(int *tab, int size);
//
//int	main(void)
//{
//	int c[5] = {5,-15,7,10,48};
//	ft_sort_int_tab(c, 5);
//	printf("Ordre croissant:? ");
//	printf("%d, %d, %d, %d, %d", c[0], c[1], c[2], c[3], c[4]);
//}
