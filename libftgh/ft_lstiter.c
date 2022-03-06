/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aay <42istanbul.com.tr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 15:41:28 by aay               #+#    #+#             */
/*   Updated: 2022/02/02 15:41:30 by aay              ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	if (!lst || !f)
		return ;
	while (lst)
	{
		f(lst->content);
		lst = lst->next;
	}
}
/*
#include <stdio.h>

void lstprint(void *p)
{
    printf("%s", (char *)p);
}

 int main()
{
    t_list *lst;
    t_list *p;
    char *t = "123";
    lst = ft_lstnew(t);
    p = ft_lstnew("abc");
    
    ft_lstadd_back(&lst, p);
    ft_lstiter(lst, lstprint);
}
*/
