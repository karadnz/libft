/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkaraden <mkaraden@student.42istanbul.com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 18:41:48 by mkaraden          #+#    #+#             */
/*   Updated: 2022/10/07 19:00:21 by mkaraden         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *str)
{
	char	*rt;
	size_t	len;

	len = ft_strlen(str);
	rt = malloc(sizeof(char) * (len + 1));
	if (!rt)
		return (0);
	ft_strlcpy(rt, str, len + 1);
	return (rt);
}
