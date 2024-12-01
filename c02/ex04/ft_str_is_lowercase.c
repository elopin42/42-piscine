/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elopin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/20 23:55:39 by elopin            #+#    #+#             */
/*   Updated: 2024/08/21 00:32:35 by elopin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
{
	int	i;
	int	result;

	result = 1;
	i = 0;
	while (str[i])
	{
		if (str[i] < 97 || str[i] > 122)
		{
			result = 0;
			return (result);
		}
		i++;
	}
	return (result);
}
