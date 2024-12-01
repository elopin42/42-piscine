/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elopin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/03 18:35:53 by elopin            #+#    #+#             */
/*   Updated: 2024/09/05 17:59:14 by elopin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *str)
{
	char	*s;
	int		i;

	i = 0;
	s = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	s = malloc(sizeof(char) * i);
	if (s == NULL)
		return (NULL);
	i = 0;
	while (str[i] != '\0')
	{
		s[i] = str[i];
		i++;
	}
	s[i] = '\0';
	return (s);
}
/*#include <stdio.h>
int	main(int ac, char **av)
{
	(void)	ac;
	printf("%s", ft_strdup(av[1]));
	return (0);
}*/
