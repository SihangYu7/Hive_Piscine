/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: siyu <siyu@student.hive.fi>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 15:58:10 by siyu              #+#    #+#             */
/*   Updated: 2024/01/29 17:03:44 by siyu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*array;
	int	size;
	int	i;

	if (min >= max)
		return (NULL);
	size = max - min;
	array = (int *)malloc(size * sizeof(int));
	if (array == NULL)
		return (NULL);
	i = 0;
	while (i < size)
	{
		array[i] = min + i;
		i++;
	}
	return (array);
}
/*
#include <stdio.h>
int	main(void)
{
	int	i = 0;
	int min_nb = -10;
	int max_nb = -1;
	int *rslt = ft_range(min_nb, max_nb);
	if (rslt != NULL)
	{
		while (i < max_nb - min_nb)
		{
			printf("%d\n", rslt[i]);
			i++;
		}
		free(rslt);
	}
	return (0);
}*/
