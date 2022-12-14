/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkaraden <mkaraden@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 13:47:24 by mkaraden          #+#    #+#             */
/*   Updated: 2022/10/18 14:41:03 by mkaraden         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_intlen(int n)
{
	int	rt;

	rt = (n < 0);
	if (n == 0)
		return (1);
	while (n != 0)
	{
		rt++;
		n = n / 10;
	}
	return (rt);
}

static int	ft_abs(int n)
{
	if (n < 0)
		n = -n;
	return (n);
}

static void	ft_strrev(char *str)
{
	int		len;
	int		i;
	char	temp;

	i = 0;
	len = ft_strlen(str);
	while (i < len / 2)
	{
		temp = str[len - 1 - i];
		str[len - 1 - i] = str[i];
		str[i++] = temp;
	}
}

char	*ft_itoa(int n)
{
	int		len;
	int		i;
	char	*rt;
	int		is_n;

	is_n = (n < 0);
	i = 0;
	len = ft_intlen(n);
	rt = (char *)malloc((len + 1) * sizeof(char));
	if (!rt)
		return (0);
	if (n == 0)
		rt[i++] = '0';
	while (n != 0)
	{
		rt[i++] = ft_abs(n % 10) + '0';
		n = n / 10;
	}
	if (is_n)
		rt[i++] = '-';
	rt[i] = '\0';
	ft_strrev(rt);
	return (rt);
}
