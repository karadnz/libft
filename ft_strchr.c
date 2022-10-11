/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkaraden <mkaraden@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 12:39:48 by mkaraden          #+#    #+#             */
/*   Updated: 2022/10/11 14:14:17 by mkaraden         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	int		i;
	char	*rt;

	rt = 0;
	i = 0;
	while (str[i])
	{
		if (str[i] == (unsigned char)c)
		{
			rt = (char *)&str[i];
			return (rt);
		}
		i++;
	}
	if (str[i] == (unsigned char)c)
		rt = (char *)&str[i];
	return (rt);
}
