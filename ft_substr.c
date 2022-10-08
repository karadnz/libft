/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkaraden <mkaraden@student.42istanbul.com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 13:20:43 by mkaraden          #+#    #+#             */
/*   Updated: 2022/10/08 13:31:03 by mkaraden         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*rt;
	size_t	i;

	i = 0;
	rt = (char *)malloc(len + 1);
	if (!s || !rt)
		return (0);
	while (i < ft_strlen(s) && i < len)
		rt[i++] = s[start++];
	rt[i] = '\0';
	return (rt);
}
