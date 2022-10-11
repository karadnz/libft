/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isspace.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkaraden <mkaraden@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 11:30:26 by mkaraden          #+#    #+#             */
/*   Updated: 2022/10/11 11:31:38 by mkaraden         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_isspace(int c)
{
	unsigned char ch;

	ch = c;
	if (ch == '\f' || ch == '\n' || ch == ' ')
		return (1);
	if (ch == '\v' || ch == '\t' || ch == '\r')
		return (1);
	return (0);
}