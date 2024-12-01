/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elopin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/22 20:33:19 by elopin            #+#    #+#             */
/*   Updated: 2024/08/27 15:30:39 by elopin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	b;

	i = 0;
	b = 0;
	while (dest[b])
		b++;
	while (src[i])
	{
		dest[b + i] = src[i];
		i++;
	}
	dest[b + i] = '\0';
	return (dest);
}
/*int	main()
{
	char a[6] = "test";
	char d[] = "trsg";
	printf("%s", ft_strcat(a, d));
}*/
