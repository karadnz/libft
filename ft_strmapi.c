/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkaraden <mkaraden@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 00:16:46 by mkaraden          #+#    #+#             */
/*   Updated: 2022/10/18 14:49:08 by mkaraden         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*rt;
	size_t	i;

	if (!s)
		return (0);
	rt = (char *)malloc(ft_strlen(s) + 1);
	if (!rt)
		return (0);
	i = 0;
	while (s[i])
	{
		rt[i] = (*f)(i, s[i]);
		i++;
	}
	rt[i] = '\0';
	return (rt);
}
