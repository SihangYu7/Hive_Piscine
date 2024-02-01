/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: siyu <siyu@student.hive.fi>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 13:51:26 by siyu              #+#    #+#             */
/*   Updated: 2024/01/21 17:14:55 by siyu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}
/*#include <stdio.h>
int	ft_strlen(char *str);

int main(void)
{
	int i;
	char str[] = "HivePiscine";
	i = ft_strlen(str);
	printf("%d\n", i);
	return (0);
}*/
