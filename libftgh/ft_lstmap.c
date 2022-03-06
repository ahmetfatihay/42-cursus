/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aay <42istanbul.com.tr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 15:42:26 by aay               #+#    #+#             */
/*   Updated: 2022/02/02 15:42:33 by aay              ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void(*del)(void *))
{
	t_list	*newlst;
	t_list	*newel;

	if (!lst)
		return (NULL);
	newlst = NULL;
	while (lst)
	{
		newel = ft_lstnew(f(lst->content));
		if (!newel)
		{
			ft_lstclear(&newlst, del);
			return (NULL);
		}
		else
			ft_lstadd_back(&newlst, newel);
		lst = lst->next;
	}
	return (newlst);
}
/*
void *print(void *f)
{
    char *p;
    p = (char *)f;
    p[0] = 'x';
    return(f);
}

void del(void *content)
{
    free(content);
}

#include <stdio.h>

int main ()
{
    t_list *a;
    
    a = ft_lstnew(ft_strdup("fatih"));
    ft_lstadd_back(&a, ft_lstnew(ft_strdup("ay")));
    
    ft_lstmap(a, &print, del);
    printf("%s", a->next->content);
}
*/
