/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkaraden <mkaraden@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 13:02:05 by mkaraden          #+#    #+#             */
/*   Updated: 2022/10/11 14:16:20 by mkaraden         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	*rt;

	rt = 0;
	i = 0;
	while (s[i])
	{
		if (s[i] == (unsigned char) c)
		{
			rt = (char *)&s[i];
		}
		i++;
	}
	if (s[i] == (unsigned char) c)
		rt = (char *)&s[i];
	return (rt);
}
