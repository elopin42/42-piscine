/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elopin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 16:20:01 by elopin            #+#    #+#             */
/*   Updated: 2024/08/27 16:31:12 by elopin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}
/*#include <stdio.h>
#include <string.h>
int	main()
{
	char	tres[] = "trefd ekrgh 654";
	printf("%d", ft_strlen(tres));
	printf("%lu", strlen(tres));
	return(0);
}*/
