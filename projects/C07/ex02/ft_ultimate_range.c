/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: siyu <siyu@student.hive.fi>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 17:30:06 by siyu              #+#    #+#             */
/*   Updated: 2024/01/29 19:21:15 by siyu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	*array;
	int	size;
	int	i;

	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	size = max - min;
	array = (int *)malloc(size * sizeof(int));
	if (array == NULL)
	{
		*range = NULL;
		return (-1);
	}
	i = 0;
	while (i < size)
	{
		array[i] = min + i;
		i++;
	}
	*range = array;
	return (size);
}
/*#include <stdio.h>
int	main(void)
{
	int	i = 0;
	int *range;
	int size = ft_ultimate_range(&range, 1, 10);
	
	if (size > 0)
	{
		while (i < size)
		{
			printf("%d\n", range[i]);
			i++;
		}
		printf("the size of range is %d\n", size);
		free(range);
	}
	return (0);
}*/
