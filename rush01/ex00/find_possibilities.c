/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find_possibilities.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cde-bard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/25 19:46:31 by cde-bard          #+#    #+#             */
/*   Updated: 2024/08/25 20:21:54 by cde-bard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	div(int *line[4], int wrong[4]);
//remove the numbers of a string from another (if not already removed)

void	next_number(int rights[4]);
//change "rights" to the next possible combinaison
//
//(when everithing is tested rights[0] is set to -1)

int	count_boxs(int *str)
{
	int	i;
	int	boxs_viewed;
	int	highest_box;

	i = 0;
	boxs_viewed = 0;
	while (i != 4)
	{
		if (str[i] > highest_box)
		{
			highest_box = str[i];
			boxs_viewed++;
		}
		i++;
	}
	return (boxs_viewed);
}
//return the number of boxs viewed

int	compatibility(int rights[4], int *line[4])
{
	int	i;

	i = 0;
	while (i != 4)
	{
		if (*line[i] % rights[i] != 0)
			return (0);
		i++;
	}
	return (1);
}
//return 1 if solution is compatible with already known values

void	find_possibilities(int *line[4], int clue, int rights[4])
{
	while ((rights[0] * rights[1] * rights[2] * rights[3] != 210
			|| count_boxs(rights) != clue
			|| compatibility(rights, line) != 1)
		&& rights[0] != -1)
	{
		next_number(rights);
	}
}
//put each time a new solution in the "rights" string
