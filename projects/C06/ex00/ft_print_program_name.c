/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: siyu <siyu@student.hive.fi>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 14:16:14 by siyu              #+#    #+#             */
/*   Updated: 2024/01/24 18:00:29 by siyu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int	i;

	if (argc >= 1)
	{
		i = 0;
		while (argv[0][i] != '\0')
			i++;
		write(1, argv[0], i);
		write(1, "\n", 1);
	}
}