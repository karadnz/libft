/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkaraden <mkaraden@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 18:34:46 by mkaraden          #+#    #+#             */
/*   Updated: 2022/10/11 20:10:44 by mkaraden         ###   ########.fr       */
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
void	*ft_calloc(size_t nmeb, size_t size)
{
	void	*rt;

	if (nmeb == 0 || size == 0)
 		nmeb = size = 1;
	rt = malloc(nmeb * size);
	if (rt)
 		ft_bzero(rt, nmeb * size);
 	return (rt);
}