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

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*tmpdest;
	unsigned char	*tmpsrc;

	if (!src && !dest)
		return (0);
	tmpdest = (unsigned char *)dest;
	tmpsrc = (unsigned char *)src;
	if (src > dest)
		ft_memcpy(tmpdest, tmpsrc, n);
	else
	{
		while (n--)
			tmpdest[n] = tmpsrc[n];
	}
	return (dest);
}

void	*ft_memmove2(void *dest, const void *src, size_t n)
{
	char	*tmp;

	tmp = (char *)malloc(sizeof(char) * ft_strlen(src));
	if (!tmp)
		return (0);
	ft_memcpy(tmp, src, n);
	ft_memcpy(dest, tmp, n);
	free(tmp);
	return (dest);
}
