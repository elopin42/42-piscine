/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cde-bard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/25 19:10:42 by cde-bard          #+#    #+#             */
/*   Updated: 2024/08/25 19:41:34 by cde-bard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		verify_input(char *str);
//verify the syntax of the input
void	parse_and_solve(int id, int g[4][4], char *clues);
//isolate a line of the grid and solve it
void	ft_putstr(char *str);
//used to print "Error"
void	print_grid(int grid[4][4]);
//print the grid
void	initialize_grid(int grid[4][4]);
/* fill the grid with "120" int

1 = multiple of 2
2 = multiple of 3
3 = multiple of 5
4 = multiple of 7

120 = 2 * 3 * 5 * 7

120 can be every numbers */

int	main(int argc, char **argv)
{
	int	grid[4][4];
	int	id;

	id = 0;
	initialize_grid(grid);
	if (argc != 2 || verify_input(argv[1]) == 0)
	{
		ft_putstr("Error\n");
		return (0);
	}
	while (id != 32)
	{
		parse_and_solve(id % 16, grid, argv[1]);
		id++;
	}
	if (grid[0][0] == 1)
		ft_putstr("Error\n");
	else
		print_grid(grid);
	return (0);
}
//id is the clue we're starting from
