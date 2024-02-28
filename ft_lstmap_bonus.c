/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jadiaz-b <jadiaz-b@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 19:39:33 by jadiaz-b          #+#    #+#             */
/*   Updated: 2024/02/28 22:21:33 by jadiaz-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*newlist;
	t_list	*newnode;
	t_list	*last;

	newlist = NULL;
	if (lst == NULL || f == NULL)
		return (NULL);
	while (lst != NULL)
	{
		newnode = ft_lstnew(f(lst->content));
		if (newnode == NULL)
		{
			ft_lstclear(&newlist, del);
			return (NULL);
		}
		if (newlist == NULL)
			newlist = newnode;
		else
			last->next = newnode;
		last = newnode;
		lst = lst->next;
	}
	return (newlist);
}
/*
// This while I douldn t developed  and did not worked at the end
{
	t_list  *listnew;
	t_list  *newnode;

if (lst != NULL && f != NULL)
	return (NULL);
newlist = NULL;

while(lst != NULL)
	{
	ft_lstiter(lst, f);
	malloc(sizeof(t_list));
	free (lst);
	return (NULL);
	}
}
*/