/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jadiaz-b <jadiaz-b@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 16:46:12 by jadiaz-b          #+#    #+#             */
/*   Updated: 2024/02/28 18:17:02 by jadiaz-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*current;
	t_list	*next;

	if (lst != NULL && del != NULL)
	{
		next = *lst;
		while (next != NULL && *lst && lst)
		{
			current = next->next;
			ft_lstdelone(next, del);
			next = current;
		}
		*lst = NULL;
	}
}
