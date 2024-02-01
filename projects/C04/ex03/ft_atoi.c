/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: siyu <siyu@student.hive.fi>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/21 14:27:33 by siyu              #+#    #+#             */
/*   Updated: 2024/01/22 12:02:03 by siyu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int	i;
	int	ngtv;
	int	rslt;

	i = 0;
	while (str[i] == '\t' || str[i] == '\n'
		|| str[i] == '\v' || str[i] == '\f'
		|| str[i] == '\r' || str[i] == ' ')
		i++;
	ngtv = 0;
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			ngtv++;
		i++;
	}
	rslt = 0;
	while (str[i] >= '0' && str[i] <= '9')
	{
		rslt = rslt * 10 + (str[i] - '0');
		i++;
	}
	if (ngtv % 2 != 0)
		rslt = rslt * (-1);
	return (rslt);
}
/*#include <stdio.h>
int main(void)
{
	char str1[] = " ---+--+1234ab567";
	int val1 = ft_atoi(str1);
	printf("%d\n", val1);
	return (0);
}*/
