/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkaraden <mkaraden@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 00:16:46 by mkaraden          #+#    #+#             */
/*   Updated: 2022/10/14 00:25:32 by mkaraden         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
    int i;
    int suc;
    char *rt;

    i = 0;
    suc = 0;
    while(s[i])
    {
        if ((*f)(i, s[i]))
            suc++;
        i++;
    }
    rt = malloc(suc + 1);
    i = 0;
    while(s[i])
    {
        if ((*f)(i, s[i]))
            rt[i] = s[i];
        i++;
    }
    rt[i] = '\0';
    return (rt);
}