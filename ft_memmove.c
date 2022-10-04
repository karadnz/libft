/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkaraden < mkaraden@student.42istanbul.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 11:57:37 by mkaraden          #+#    #+#             */
/*   Updated: 2022/10/04 12:35:45 by mkaraden         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t			index;
	unsigned char	*cdest;
	unsigned char	*csrc;
	unsigned char	temp[n];

	index = 0;
	cdest = dest;
	while (index < n)
	{
		temp[index] = csrc[index];
		index++;
	}
	index = 0;
	while (index < 0)
	{
		cdest[index] = temp[index];
		index++;
	}
	return (dest);
}
