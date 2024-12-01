/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elopin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/26 00:04:09 by elopin            #+#    #+#             */
/*   Updated: 2024/08/27 15:24:23 by elopin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (to_find[0] == '\0')
		return (str);
	while (str[i] != '\0')
	{
		j = 0;
		while (str[i + j] == to_find[j])
		{
			if (to_find[j + 1] == '\0')
				return (str + i);
			j++;
		}
		i++;
	}
	return (0);
}
/*#include <stdio.h>
#include <string.h>
int	main()
{
	char tres[] = "bonjour mon gars ;orn";
	char tred[] = "z";
	
	printf("%s\n", ft_strstr(tres, tred));
	printf("%s\n", strstr(tres, tred));
	return(0);
}*/
