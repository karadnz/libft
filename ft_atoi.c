/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkaraden <mkaraden@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 16:34:46 by mkaraden          #+#    #+#             */
/*   Updated: 2022/10/11 11:34:41 by mkaraden         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"



int	ft_atoi(const char *str)
{
	int rt;
	int	sign;
	int	i;

	rt = 0;
	sign = 1;
	i = 0;

	while (ft_isspace(str[i]))
		i++;
	if(str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			sign = -1;
		i++;
	}
	while (ft_isdigit(str[i]))
	{
		rt = (rt * 10) + (str[i] - '0');
		i++;
	}
	return (rt * sign);
}

