/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: siyu <siyu@student.hive.fi>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 11:54:56 by siyu              #+#    #+#             */
/*   Updated: 2024/01/24 12:05:21 by siyu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	if (nb == 0)
		return (1);
	if (nb < 0)
		return (0);
	return (nb * ft_recursive_factorial(nb - 1));
}
/*#include <stdio.h>
int	main()
{
	int numb;
	int result;
	
	numb = 5;
	result = ft_recursive_factorial(numb);
	printf("%d\n", result);
	return (0);
}*/
