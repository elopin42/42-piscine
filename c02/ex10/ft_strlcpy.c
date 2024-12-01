/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elopin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/22 13:02:29 by elopin            #+#    #+#             */
/*   Updated: 2024/08/26 22:53:00 by elopin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_len(char *src)
{
	unsigned int	counter;

	counter = 0;
	while (src[counter] != '\0')
	{
		counter++;
	}
	return (counter);
}

unsigned int	ft_strlcpy(char	*dest, char *src, unsigned int size)
{
	unsigned int	i;

	i = 0;
	if (size > 0)
	{
		while (src[i] != '\0' && i < size -1)
		{
			dest[i] = src[i];
			i++;
		}
	}
	dest[i] = '\0';
	return (ft_len(src));
}
/*#include <stdio.h>
int	main()
{
	char	src[] = "voila un test";
	char	dest[] = "bref tu fait ub test";
	unsigned int lengh;
	unsigned int size = sizeof(dest);

	lengh = ft_strlcpy(dest, src, size);
	printf("dest = %s, src = %s, size = %d, lengh = %d", dest, src, size, lengh);
}*/
