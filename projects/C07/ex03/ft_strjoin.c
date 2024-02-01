/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: siyu <siyu@student.hive.fi>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 13:19:25 by siyu              #+#    #+#             */
/*   Updated: 2024/01/30 15:39:06 by siyu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

char	*cnct_mlc(int size, char **strs, char *sep, int total_len)
{
	int		i;
	char	*cnct_str;
	char	*curr_position;

	cnct_str = malloc(total_len + 1);
	if (!cnct_str)
		return (NULL);
	curr_position = cnct_str;
	i = 0;
	while (i < size)
	{
		ft_strcpy(curr_position, strs[i]);
		curr_position += ft_strlen(strs[i]);
		if (i < size - 1)
		{
			ft_strcpy(curr_position, sep);
			curr_position += ft_strlen(sep);
		}
		i++;
	}
	*curr_position = '\0';
	return (cnct_str);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int	total_len;
	int	sep_len;
	int	i;

	if (size == 0)
		return (malloc(1));
	i = 0;
	total_len = 0;
	sep_len = ft_strlen(sep);
	while (i < size)
	{
		total_len += ft_strlen(strs[i]);
		if (i < size - 1)
			total_len += sep_len;
		i++;
	}
	return (cnct_mlc(size, strs, sep, total_len));
}
/*
#include <stdio.h>
int	main(void)
{
	char	*strings[] = {};
	int		size = 0;
	char	*separator = "-1-0-1-";
	char	*result = ft_strjoin(size, strings, separator);

	printf("Concatenated String is %s\n", result);
	free(result);
	return (0);
}*/
