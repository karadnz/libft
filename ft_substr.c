/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkaraden <mkaraden@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 13:20:43 by mkaraden          #+#    #+#             */
/*   Updated: 2022/10/11 11:31:26 by mkaraden         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*rt;
	size_t	i;
	size_t	slen; //condition icinde fonk olarak karsilastirince her loopda bastan cagiriyor

	slen = ft_strlen(s);
	i = 0;
	rt = (char *)malloc(len + 1);
	if (!s || !rt) //eger s duzgunse rt ye bakmiyor ama rt ye bakmasi gerekince sikinti cikiyor
		return (0);
	while (i < slen && i < len)
		rt[i++] = s[start++];
	rt[i] = '\0';
	return (rt);
}
