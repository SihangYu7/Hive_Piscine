/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: siyu <siyu@student.hive.fi>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 13:30:15 by siyu              #+#    #+#             */
/*   Updated: 2024/01/24 13:48:48 by siyu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	if (power == 0 && nb == 0)
		return (1);
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	return (nb * ft_recursive_power(nb, power - 1));
}
/*#include <stdio.h>
int	main(void)
{
	int base;
	int exponent;
	int result;

	base = 0;
	exponent = 0;
	result = ft_recursive_power(base, exponent);
	printf("result is %d, with base %d, exponent %d", result, base, exponent);
	return (0);
}*/
