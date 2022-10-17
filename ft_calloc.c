/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkaraden <mkaraden@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 18:34:46 by mkaraden          #+#    #+#             */
/*   Updated: 2022/10/16 15:56:53 by mkaraden         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"






// void	*ft_calloc(size_t nmeb, size_t size)
// {
// 	void	*rt;

//  	rt = malloc(nmeb * size);
//  	if (!rt)
//  		return (0);
//  	ft_bzero(rt, nmeb * size);
// 	 	return (rt);
// }

//apple calloc
void	*ft_calloc2(size_t nmeb, size_t size)
{
	void	*rt;

	if (nmeb == 0 || size == 0)
 		nmeb = size = 1;
	rt = malloc(nmeb * size);
	if (rt)
 		ft_bzero(rt, nmeb * size);
 	return (rt);
}

void	*ft_calloc(size_t count, size_t size)
{
	size_t	block;
	void	*created;
	if (count == 0 || size == 0)
	{
		count = 1;
		size = 1;
	}
	block = (count * size);
	created = (void *)malloc(block);
	if (!(created))
		return (NULL);
	ft_bzero(created, size * count);
	return (created);
}