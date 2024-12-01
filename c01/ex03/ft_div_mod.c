/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elopin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/18 17:21:27 by elopin            #+#    #+#             */
/*   Updated: 2024/08/18 19:18:25 by elopin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}
//int	main(void)
//{
//	int a, b, div, mod;
//	a = 12, b = 4;
//
//	ft_div_mod(a, b, &div, &mod);
//	printf("div = %d, mod = %d", div, mod);
//	return(0);
//}
