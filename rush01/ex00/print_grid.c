/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_grid.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cde-bard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/25 19:40:41 by cde-bard          #+#    #+#             */
/*   Updated: 2024/08/25 20:16:14 by cde-bard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	put_result(int result)
{
	if (result % 2 == 0)
		write(1, "1", 1);
	if (result % 3 == 0)
		write(1, "2", 1);
	if (result % 5 == 0)
		write(1, "3", 1);
	if (result % 7 == 0)
		write(1, "4", 1);
}
//translate the result

void	print_grid(int grid[4][4])
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (j != 4)
	{
		while (i != 4)
		{
			put_result(grid[i][j]);
			i++;
			if (i != 4)
				write(1, " ", 1);
		}
		i = 0;
		write(1, "\n", 1);
		j++;
	}
}
//print the grid
