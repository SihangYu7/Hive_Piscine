/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: siyu <siyu@student.hive.fi>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 18:00:16 by siyu              #+#    #+#             */
/*   Updated: 2024/01/23 17:15:16 by siyu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	swap_char(char *str, int len)
{
	int		j;
	int		k;
	char	temp;

	j = 0;
	while (j < len - 1)
	{
		k = 0;
		while (k < len -1)
		{
			if (str[k] > str[k + 1])
			{
				temp = str[k];
				str[k] = str[k + 1];
				str[k + 1] = temp;
			}
			k++;
		}
		j++;
	}
}

int	main(int argc, char **argv)
{
	int	i;
	int	len;

	i = 1;
	while (i < argc)
	{
		len = 0;
		while (argv[i][len] != '\0')
			len++;
		swap_char(argv[i], len);
		write(1, argv[i], len);
		write(1, "\n", 1);
		i++;
	}
	return (0);
}
