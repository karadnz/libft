/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkaraden <mkaraden@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 16:52:22 by mkaraden          #+#    #+#             */
/*   Updated: 2022/10/10 13:45:32 by mkaraden         ###   ########.fr       */
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
		while (s[i] == c)  //c leri geciyor
			i++;
		if(s[i] != c && s[i]) //sona gelmediyse rt artiyor
			rt++;
		while (s[i] != c && s[i]) //c gelene kadar index artiyor
			i++;
	}
	return (rt);
}

char	**ft_split(char const *s, char c)
{
	char	**rt;
	int		wordcount;
	int		i;
	int		templen; //wordlen
	int		j; //dis arrayin indexi

	i = 0;
	j = -1;
	wordcount = ft_getwordcount(s,c);
	rt = (char **)malloc(sizeof(char *) * (wordcount + 1)); //sondaki null pointer icin

	while(s[i])
	{
		templen = 0;
		while (s[i] == c)  //c leri geciyor
			i++;
		if(s[i] != c && s[i]) //sona gelmediyse rt artiyor
			j++;
		while (s[i + templen] != c && s[i + templen]) //c gelene kadar index artiyor
			templen++;
		if(templen > 0)
			rt[j] = ft_substr(s, i, templen); //123 456 789  \0 durumunda sondaki karakteri substr ye gondermemesi icin
		i+=templen;
	}
	j++; //dongu icinde son kelimeden sonra artmiyor
	rt[j] = 0;
	return (rt);
}



