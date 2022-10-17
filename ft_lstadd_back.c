/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkaraden <mkaraden@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 18:14:02 by mkaraden          #+#    #+#             */
/*   Updated: 2022/10/16 18:34:33 by mkaraden         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    ft_lstadd_back(t_list **lst, t_list *new)
{
    t_list *temp;
    temp = 0;
    // if (*lst)
    // {
    //     temp = ft_lstlast(*lst);
    //     temp->next = new;
    // }
	if (lst)
	{
		if (*lst)
		{
			temp = ft_lstlast(*lst);
			temp->next = new;
		}
        else
			*lst = new; //eger gelen bir sey yoksa new hem ilk hem de son (yani tek) eleman olur
		
	}
}