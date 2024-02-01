/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkosilov <kkosilov@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/13 12:56:25 by kkosilov          #+#    #+#             */
/*   Updated: 2024/01/13 18:19:44 by kkosilov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char c);

void	prerush(int r, int c, int x, int y)
{
	if ((c == 1 && r == 1) || (c == x && r == y && x != 1 && y != 1))
	{
		ft_putchar('/');
	}
	else if ((c == x && r == 1) || (c == 1 && r == y))
	{
		ft_putchar('\\');
	}
	else if ((c == 1 || c == x) && (r != 1 && r != y))
	{
		ft_putchar('*');
	}
	else if ((c != 1 || c != x) && (r == 1 || r == y))
	{
		ft_putchar('*');
	}
	else
	{
		ft_putchar(' ');
	}
}

void	rush(int x, int y)
{
	int	r;
	int	c;

	r = 1;
	while (r <= y)
	{
		c = 1;
		while (c <= x)
		{
			prerush(r, c, x, y);
			c++;
		}
		ft_putchar('\n');
		r++;
	}
}
