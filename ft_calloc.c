/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkaraden <mkaraden@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 18:34:46 by mkaraden          #+#    #+#             */
/*   Updated: 2022/10/18 14:43:47 by mkaraden         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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
