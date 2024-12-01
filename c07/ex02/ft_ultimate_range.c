/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elopin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/04 04:10:26 by elopin            #+#    #+#             */
/*   Updated: 2024/09/05 04:47:52 by elopin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;

	i = 0;
	if (min >= max)
	{
		range = NULL;
		return (0);
	}
	*range = malloc(sizeof(int) * (max - min));
	while (min != max)
	{
		(*range)[i] = min;
		i++;
		min++;
	}
	if (!range)
		return (-1);
	return (i);
}
/*
#include <stdio.h>
int	main(int ac, char **av)
{
	int *dest;
	int i = 0;
	printf("%d\n", ft_ultimate_range(&dest, atoi(av[1]), atoi(av[2])));
	if (ac ==3)
	{
		while (dest[i])
		{
			printf("%d,", dest[i]);
			i++;
		}
	}
}*/
