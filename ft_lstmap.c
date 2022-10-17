/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkaraden <mkaraden@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 18:50:15 by mkaraden          #+#    #+#             */
/*   Updated: 2022/10/17 12:08:45 by mkaraden         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list *ft_lstmap(t_list *lst, void *(*f)(void *),void (*del)(void *))
{
    t_list *rt;
    t_list *temp;

    rt = 0;
    if (!lst || !f || !del)
        return (0);
    while (lst)
    {
        temp = ft_lstnew((*f)(lst->content));  //listnew content alarak yeni bir eleman olsuturp donduruyor
        if (!temp)
        {
            ft_lstdelone(lst,del);
        }
        ft_lstadd_back(&rt, temp);
        lst = lst->next;
    }
    return(rt);
    
}
