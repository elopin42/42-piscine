/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   verify_input.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cde-bard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/25 19:36:24 by cde-bard          #+#    #+#             */
/*   Updated: 2024/08/25 19:37:55 by cde-bard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str);
//return string lengh

int	verify_input(char *str)
{
	int	i;

	i = 0;
	if (ft_strlen(str) != 31)
	{
		return (0);
	}
	while (i != 30)
	{
		if (str[i] < '1' || str[i] > '4')
		{
			return (0);
		}
		if (str[i + 1] != ' ')
		{
			return (0);
		}
		i = i + 2;
	}
	if (str[i] < '1' || str[i] > '4')
	{
		return (0);
	}
	return (1);
}
//if input syntax is correct, return 1
