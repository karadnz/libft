/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkaraden <mkaraden@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 13:20:43 by mkaraden          #+#    #+#             */
/*   Updated: 2022/10/18 14:51:50 by mkaraden         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*rt;
	size_t	i;
	size_t	slen;

	if (!s)
		return (0);
	slen = ft_strlen(s);
	i = 0;
	rt = (char *)malloc(len + 1);
	if (!rt)
		return (0);
	while (i < slen && start < slen && i < len)
		rt[i++] = s[start++];
	rt[i] = '\0';
	return (rt);
}
