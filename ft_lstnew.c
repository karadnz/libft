/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkaraden <mkaraden@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 17:21:44 by mkaraden          #+#    #+#             */
/*   Updated: 2022/10/18 15:20:57 by mkaraden         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*rt;

	rt = (t_list *)malloc(sizeof(t_list));
	if (!rt)
		return (0);
	rt->content = content;
	rt->next = 0;
	return (rt);
}
