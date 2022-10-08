/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkaraden <mkaraden@student.42istanbul.com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 16:52:22 by mkaraden          #+#    #+#             */
/*   Updated: 2022/10/08 18:31:40 by mkaraden         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_getwordcount(char const *s, char c)
{
	int	i;
	int	rt;

	i = 0;
	rt = 0;
	while(s[i])
	{
		while (s[i] == c)
			i++;
		if(s[i] != c && s[i])
			rt++;
		while (s[i] != c && s[i])
			i++;
	}
	return (rt);
}

char	**ft_split(char const *s, char c)
{
	char	**rt;
	int		wordcount;
	int		i;
	int		j;

	i = 0;
	wordcount = ft_getwordcount(s,c);
	rt = (char **)malloc(sizeof(char *) * wordcount);

	while (s[i])
	{
		j = 0;
		while (s[i] == c)
			i++;
		if(s[i] != c && s[i])
		{
			while(s[i + j] != c && s[i + j])
			{
				j++;
			}
			while(j > 0)
			{
				rt[



