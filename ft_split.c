/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkaraden <mkaraden@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 16:52:22 by mkaraden          #+#    #+#             */
/*   Updated: 2022/10/18 17:39:55 by mkaraden         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_getwordcount(char const *s, char c)
{
	int	i;
	int	rt;

	i = 0;
	rt = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		if (s[i] != c && s[i])
			rt++;
		while (s[i] != c && s[i])
			i++;
	}
	return (rt);
}

char	**ft_split(char const *s, char c)
{
	char	**rt;
	int		i;
	int		templen;
	int		j;

	i = 0;
	j = -1;
	if (!s)
		return (0);
	rt = (char **)malloc(sizeof(char *) * (ft_getwordcount(s, c) + 1));
	if (!rt)
		return (0);
	while (s[i])
	{
		templen = 0;
		while (s[i] == c)
			i++;
		if (s[i] != c && s[i])
			j++;
		while (s[i + templen] != c && s[i + templen])
			templen++;
		if (templen > 0)
			rt[j] = ft_substr(s, i, templen);
		i += templen;
	}
	rt[++j] = 0;
	return (rt);
}
