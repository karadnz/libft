/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkaraden <mkaraden@student.42istanbul.com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 14:18:52 by mkaraden          #+#    #+#             */
/*   Updated: 2022/10/08 14:33:30 by mkaraden         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_chrcount(char const *str, int c)
{
	int	i;
	int	rt;

	i = 0;
	rt = 0;
	while (str[i])
	{
		if (str[i] == (unsigned char)c)
			rt++;
		i++;
	}
	return (rt);
}
//////


static int	ft_trimcount(char const *str,char const *set)
{
	int	i;
	int j;
	
	i = 0;
	j = 0;
	while (set[i])
char	*ft_strtrim(char const *s1, char const *set)
{
	char	*rt;
	int		i;
	int		tcount;
	int		len;

	
