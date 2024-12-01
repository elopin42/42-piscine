/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elopin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/21 15:40:57 by elopin            #+#    #+#             */
/*   Updated: 2024/08/21 16:12:59 by elopin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)

{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 65 && str[i] <= 90)
		{
			str[i] = str[i] + 32;
		}
		i++;
	}
	return (str);
}
/*#include <unistd.h>
#include <stdio.h>

int		main()
{
	char	c[] = "apHGTYDKFIbffdjGTDHEUn 0976 ['*";

	ft_strlowcase(c);
	printf("%s", c);
	return(0);
}*/
