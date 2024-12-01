/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elopin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/03 19:24:17 by elopin            #+#    #+#             */
/*   Updated: 2024/09/05 18:08:12 by elopin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	*tableau;

	i = 0;
	if (min > max)
		return (0);
	tableau = malloc((max - min) * sizeof(int));
	if (!tableau)
		return (NULL);
	while (min < max)
	{
		tableau[i] = min;
		i++;
		min++;
	}
	return (tableau);
}
/*#include <stdio.h>
int	main()
{
	int	*zbi;
	int	i;

	i = 0;
	zbi = (ft_range(5, 10));
	while(zbi[i])
	{
		printf("%d, ", zbi[i]);
		i++;
	}
	return(0);
}*/
