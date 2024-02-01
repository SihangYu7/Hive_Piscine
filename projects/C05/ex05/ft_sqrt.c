/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: siyu <siyu@student.hive.fi>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 15:31:28 by siyu              #+#    #+#             */
/*   Updated: 2024/01/24 15:42:52 by siyu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	i;

	i = 1;
	while (i * i <= nb && i < 46341)
	{
		if (i * i == nb)
			return (i);
		else
			i++;
	}
	return (0);
}
/*#include <stdio.h>
int main(void)
{
	int numb;
	int result;

	numb = 2147483647;
	result = ft_sqrt(numb);
	printf("the sqrt of %d is %d\n", numb, result);
}*/	
