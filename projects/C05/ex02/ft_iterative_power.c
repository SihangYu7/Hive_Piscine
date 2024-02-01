/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: siyu <siyu@student.hive.fi>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 12:21:11 by siyu              #+#    #+#             */
/*   Updated: 2024/01/24 13:37:25 by siyu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	result;

	if (power == 0 && nb == 0)
		return (1);
	if (power < 0)
		return (0);
	result = 1;
	while (power > 0)
	{
		result *= nb;
		power--;
	}
	return (result);
}
/*#include <stdio.h>
int	main(void)
{
	int base;
	int exponent;
	int result;

	base = 0;
	exponent = 0;
	result = ft_iterative_power(base, exponent);
	printf("result is %d, with base %d, exponent %d\n", result, base, exponent);
	return (0);
}*/
