/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkaraden <mkaraden@student.42istanbul.com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 13:56:50 by mkaraden          #+#    #+#             */
/*   Updated: 2022/10/08 14:18:01 by mkaraden         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		len;
	char	*rt;
	int		i;
	int		j;

	j = 0;
	i = 0;
	len = ft_strlen(s1);
	len += ft_strlen(s2);
	rt = (char *)malloc(len + 1);
	if (!s1 || !s2 || !rt)
		return (0);
	while (s1[i])
	{
		rt[i] = s1[i];
		i++;
	}
	while (s2[j])
		rt[i++] = s2[j++];
	rt[i] = '\0';
	return (rt);
}
