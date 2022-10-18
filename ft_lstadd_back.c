/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkaraden <mkaraden@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 18:14:02 by mkaraden          #+#    #+#             */
/*   Updated: 2022/10/18 15:25:47 by mkaraden         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*temp;

	temp = 0;
	if (lst)
	{
		if (*lst)
		{
			temp = ft_lstlast(*lst);
			temp->next = new;
		}
		else
		{
			*lst = new;
		}
	}
}
