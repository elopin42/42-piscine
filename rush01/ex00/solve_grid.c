/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solve_grid.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cde-bard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/25 19:42:19 by cde-bard          #+#    #+#             */
/*   Updated: 2024/08/25 20:24:52 by cde-bard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	find_possibilities(int *line[4], int clue, int rights[4]);
//find all different combination possible
void	initialize_array(int *array, int d);

void	div(int *line[4], int wrong[4])
{
	int	i;

	i = 0;
	while (i != 4)
	{
		if (*line[i] % 2 == 0 && wrong[i] % 2 == 0)
			*line[i] = *line[i] / 2;
		if (*line[i] % 3 == 0 && wrong[i] % 3 == 0)
			*line[i] = *line[i] / 3;
		if (*line[i] % 5 == 0 && wrong[i] % 5 == 0)
			*line[i] = *line[i] / 5;
		if (*line[i] % 7 == 0 && wrong[i] % 7 == 0)
			*line[i] = *line[i] / 7;
		i++;
	}
}
//remove the numbers of a string from another (if not already removed)

void	remove_possibilities(int *line[4], int clue)
{
	int	wrong[4];
	int	rights[4];
	int	*wrong_ptr[4];
	int	i;

	i = 0;
	initialize_array(wrong, 210);
	initialize_array(rights, 2);
	while (i != 4)
	{
		wrong_ptr[i] = &wrong[i];
		i++;
	}
	while (rights[0] != -1)
	{
		find_possibilities(line, clue, rights);
		if (rights[0] != -1)
			div(wrong_ptr, rights);
	}
	div(line, wrong);
}
//find and remove the wrong possibilities

void	parse_and_solve(int id, int g[4][4], char *clues)
{
	int	i;
	int	*line[4];
	int	clue;

	i = 0;
	clue = clues[id * 2] - '0';
	while (i != 4)
	{
		if (id / 4 == 0)
			line[i] = &g[id % 4][i];
		if (id / 4 == 1)
			line[i] = &g[id % 4][3 - i];
		if (id / 4 == 2)
			line[i] = &g[i][id % 4];
		if (id / 4 == 3)
			line[i] = &g[3 - i][id % 4];
		i++;
	}
	remove_possibilities(line, clue);
}
//isolate one line and its clue to work on it
