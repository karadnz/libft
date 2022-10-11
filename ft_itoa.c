/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkaraden <mkaraden@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 13:47:24 by mkaraden          #+#    #+#             */
/*   Updated: 2022/10/11 11:32:29 by mkaraden         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_intlen(int n) //negatifse + 1
{
    int rt;
    rt = (n < 0);
    if (n == 0)
        return (1);
    while (n % 10 != 0)
    {
        rt++;
        n = n/10;
    }
    return (rt);
}

char    *ft_itoa(int n)
{
    int len;
}