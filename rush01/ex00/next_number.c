/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   next_number.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cde-bard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/25 20:03:30 by cde-bard          #+#    #+#             */
/*   Updated: 2024/08/25 20:08:28 by cde-bard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	increment(int *nb)
{
	if (*nb == 7)
		*nb = 11;
	else if (*nb == 5)
		*nb = 7;
	else if (*nb == 3)
		*nb = 5;
	else if (*nb == 2)
		*nb = 3;
}
//increment to the next prime number ([2, 3, 5, 7] means [1, 2, 3, 4])

void	next_number(int rights[4])
{
	increment(&rights[3]);
	if (rights[3] == 11)
	{
		rights[3] = 2;
		increment(&rights[2]);
	}
	if (rights[2] == 11)
	{
		rights[2] = 2;
		increment(&rights[1]);
	}
	if (rights[1] == 11)
	{
		rights[1] = 2;
		increment(&rights[0]);
	}
	if (rights[0] == 11)
	{
		rights[0] = -1;
	}
}
//change "rights" to the next possible number (counting in base 4)
