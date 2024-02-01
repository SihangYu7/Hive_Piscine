/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: siyu <siyu@student.hive.fi>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 16:44:43 by siyu              #+#    #+#             */
/*   Updated: 2024/01/25 16:45:18 by siyu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	fctrl;

	if (nb < 0)
		return (0);
	fctrl = 1;
	while (nb > 0)
	{
		fctrl *= nb--;
	}
	return (fctrl);
}
/*#include <stdio.h>
int	main()
{
	int numb;
	int result;

	numb = 5;
	result = ft_iterative_factorial(numb);
	printf("%d\n", result);
}*/
