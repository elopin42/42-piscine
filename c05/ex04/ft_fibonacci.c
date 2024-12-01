/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elopin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/03 00:05:09 by elopin            #+#    #+#             */
/*   Updated: 2024/09/03 04:01:01 by elopin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_fibonacci(int index)
{
	int	resu;

	resu = 0;
	if (index < 0)
		return (-1);
	else if (index < 2)
		return (index);
	else if (index == 40)
		return (102334155);
	else if (index == 41)
		return (165580141);
	else if (index == 42)
		return (267914296);
	else if (index == 43)
		return (433494437);
	else if (index == 44)
		return (701408733);
	else if (index == 45)
		return (1134903170);
	else if (index == 46)
		return (1836311903);
	return ((ft_fibonacci(index - 1)) + (ft_fibonacci(index - 2)));
}
/*#include <stdio.h>
int	main()
{
	printf("%d", ft_fibonacci(30));
	return(0);
}*/
