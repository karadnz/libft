/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkaraden <mkaraden@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 14:18:52 by mkaraden          #+#    #+#             */
/*   Updated: 2022/10/16 16:31:01 by mkaraden         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_istrim(char const ch, char const *set)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == ch)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*rt;
	int		start;
	int		end;
	size_t	slen;

	if (!s1 || !set) //set null da olabilir mi diye bak
		return (0);
	slen = ft_strlen(s1);
	start = 0;
	end = slen - 1;
	while (ft_istrim(s1[start], set) && (size_t)start < slen - 1)
		start++;
	if (start == end)
		{
			rt = malloc(sizeof(char));
			rt[0] = 0;
			return (rt);
		}
	while (ft_istrim(s1[end], set))
		end--;
	rt = ft_substr(s1, start, end - start + 1);
	return (rt);
}
