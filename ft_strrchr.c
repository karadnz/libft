/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkaraden < mkaraden@student.42istanbul.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 13:02:05 by mkaraden          #+#    #+#             */
/*   Updated: 2022/10/05 13:16:52 by mkaraden         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	int		i;
	char	*rt;

	rt = 0;
	i = 0;
	while (str[i])
	{
		if (str[i] == (unsigned char) c)
		{
			rt = (char *)&str[i];
		}
		i++;
	}
	return (rt);
}
