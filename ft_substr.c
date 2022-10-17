/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkaraden <mkaraden@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 13:20:43 by mkaraden          #+#    #+#             */
/*   Updated: 2022/10/16 16:27:23 by mkaraden         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*Returns the substring of the given string at the given start position 
with the given length (or smaller if the length of the original string 
is less than start + length, or length is bigger than MAXSTRINGLEN).*/

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*rt;
	size_t	i;
	size_t	slen; //condition icinde fonk olarak karsilastirince her loopda bastan cagiriyor

	if (!s)
		return (0);
	slen = ft_strlen(s);
	i = 0;
	rt = (char *)malloc(len + 1);
	if (!rt) 
		return (0);
	while (i < slen && start < slen && i < len) //start s disina cikmasin diye
		rt[i++] = s[start++];
	rt[i] = '\0';
	return (rt);
}

