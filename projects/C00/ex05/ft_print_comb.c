/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: siyu <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 14:23:57 by siyu              #+#    #+#             */
/*   Updated: 2024/01/12 12:35:48 by siyu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb(void)
{
	char	number[5];

	number[0] = '0';
	while (number[0] <= '7')
	{
		number[1] = number[0] + 1;
		while (number[1] <= '8')
		{
			number[2] = number[1] + 1;
			while (number[2] <= '9')
			{
				write(1, number, 5);
				if (number[0] != '7' || number[1] != '8' || number[2] != '9')
				{
					write(1, ", ", 2);
				}
				number[2]++;
			}
			number[1]++;
		}
		number[0]++;
	}
}
