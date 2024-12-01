/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elopin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/29 22:06:47 by elopin            #+#    #+#             */
/*   Updated: 2024/09/01 20:44:24 by elopin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_putchar(char *av)
{
	int	s;

	s = 0;
	while (av[s])
	{
		write(1, &av[s], 1);
		s++;
	}
}

int	ft_cmpr(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] && s2[i] && s1[i] == s2[i])
		i++;
	return (s1[i] - s2[i]);
}

int	main(int ac, char **av)
{
	char	*tmp;
	int		i;

	i = 1;
	while (i < (ac - 1))
	{
		if (ft_cmpr(av[i], av[i + 1]) > 0)
		{
			tmp = av[i];
			av[i] = av[i + 1];
			av[i + 1] = tmp;
			i = 1;
		}
		else
			i++;
	}
	i = 1;
	while (i < ac)
	{
		ft_putchar(av[i]);
		write (1, "\n", 1);
		i++;
	}
	return (0);
}
