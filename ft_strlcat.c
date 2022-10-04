/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkaraden < mkaraden@student.42istanbul.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 13:31:04 by mkaraden          #+#    #+#             */
/*   Updated: 2022/10/04 14:48:26 by mkaraden         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	dlen;

	index = 0;
	if (size <= ft_strlen(dest))
		return (dstsize + ft_strlen(src));
	dlen = ft_strlen(dst);
	i = 0;
	while (src[i] && dlen + 1 < size)
	{
		dst[dlen] = src[i];
		i++;
		dlen++;
	}
	dest[dlen] = '\0';
	return (ft_strlen(dst) + ft_strlen(&src[i]));
}
