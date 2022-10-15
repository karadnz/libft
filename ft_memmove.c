/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkaraden <mkaraden@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 11:57:37 by mkaraden          #+#    #+#             */
/*   Updated: 2022/10/11 20:08:04 by mkaraden         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
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




//eski ft_memmove	: 1.KO 2.OK 3.KO 4.KO
// void	*ft_memmove(void *dest, const void *src, size_t n)
// {
// 	size_t			index;
// 	unsigned char	*cdest;
// 	unsigned char	*csrc;
// 	unsigned char	temp[n];

// 	index = 0;
// 	cdest = (unsigned char*)dest;
// 	csrc = (unsigned char*)src;
// 	while (index < n)
// 	{
// 		temp[index] = csrc[index];
// 		index++;
// 	}
// 	index = 0;
// 	while (index < 0)
// 	{
// 		cdest[index] = temp[index];
// 		index++;
// 	}
// 	return (dest);
// }
