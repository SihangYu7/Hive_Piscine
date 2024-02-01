/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: siyu <siyu@student.hive.fi>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 19:01:37 by siyu              #+#    #+#             */
/*   Updated: 2024/01/31 12:10:04 by siyu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include "ft_stock_str.h"

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strdup(char *src)
{
	int		len;
	char	*dup;
	int		i;

	len = 0;
	while (src[len])
		len++;
	dup = (char *)malloc((len + 1) * sizeof(char));
	if (!dup)
		return (NULL);
	i = 0;
	while (src[i])
	{
		dup[i] = src[i];
		i++;
	}
	dup[i] = '\0';
	return (dup);
}

struct s_stock_str	*ft_strs_to_tab(int argc, char **argv)
{
	t_stock_str	*my_stock;
	int			i;

	my_stock = (t_stock_str *)malloc((argc + 1) * sizeof(t_stock_str));
	if (!my_stock)
		return (NULL);
	i = 0;
	while (i < argc)
	{
		my_stock[i].size = ft_strlen(argv[i]);
		my_stock[i].str = argv[i];
		my_stock[i].copy = ft_strdup(argv[i]);
		i++;
	}
	my_stock[i].size = 0;
	my_stock[i].str = NULL;
	my_stock[i].copy = NULL;
	return (my_stock);
}
