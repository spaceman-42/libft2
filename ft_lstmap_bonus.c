/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jadiaz-b <jadiaz-b@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 19:39:33 by jadiaz-b          #+#    #+#             */
/*   Updated: 2024/02/28 23:12:54 by jadiaz-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*newlist;
	t_list	*node;
	void	*buffer;

	if (lst == NULL || f == NULL || del == NULL)
		return (0);
	newlist = NULL;
	while (lst != NULL)
	{
		buffer = f(lst->content);
		node = ft_lstnew(buffer);
		if (!node)
		{
			del(buffer);
			ft_lstclear(&newlist, (*del));
			return (newlist);
		}
		ft_lstadd_back(&newlist, node);
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