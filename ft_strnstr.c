/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkaraden < mkaraden@student.42istanbul.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 16:09:25 by mkaraden          #+#    #+#             */
/*   Updated: 2022/10/05 16:27:08 by mkaraden         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str, const char *to_find, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (!to_find[j])
		return ((char *)str);
	while (str[i] && i < len)
	{
		while ((str[i + j] == to_find[j]) && i + j < len)
		{
			j++;
			if (!to_find[j])
				return ((char *)&str[i]);
		}
		j = 0;
		i++;
	}
	return (0);
}
