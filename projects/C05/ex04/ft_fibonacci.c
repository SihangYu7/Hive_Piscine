/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: siyu <siyu@student.hive.fi>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 13:49:49 by siyu              #+#    #+#             */
/*   Updated: 2024/01/24 14:10:24 by siyu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_fibonacci(int index)
{
	if (index < 0)
		return (-1);
	if (index == 0)
		return (0);
	else if (index == 1 || index == 2)
		return (1);
	return (ft_fibonacci(index - 1) + ft_fibonacci(index - 2));
}
/*#include <stdio.h>
int	main(void)
{
	int position;
	int result;

	position = 10;
	result = ft_fibonacci(position);
	if (result != -1)
		printf("at F%d position, the result is %d\n", position, result);
	return (0);
}*/
