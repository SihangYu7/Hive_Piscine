/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_abs.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: siyu <siyu@student.hive.fi>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 15:10:31 by siyu              #+#    #+#             */
/*   Updated: 2024/01/30 18:47:46 by siyu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_ABS_H
# define FT_ABS_H

static	inline	int	my_abs(int value)
{
	if (value < 0)
		return (-value);
	else
		return (value);
}
# define ABS(val) my_abs(val)
#endif
