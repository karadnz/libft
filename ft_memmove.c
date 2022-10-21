/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkaraden <mkaraden@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 11:57:37 by mkaraden          #+#    #+#             */
/*   Updated: 2022/10/18 14:45:56 by mkaraden         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*tmpdest;
	unsigned char	*tmpsrc;

	if (!src && !dest)
		return (0);
	tmpdest = (unsigned char *)dst;
	tmpsrc = (unsigned char *)src;
	if (src > dest)
		ft_memcpy(tmpdest, tmpsrc, len);
	else
	{
		while (n--)
			tmpdest[len] = tmpsrc[len];
	}
	return (dest);
}
