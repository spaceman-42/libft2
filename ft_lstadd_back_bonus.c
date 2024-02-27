/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jadiaz-b <jadiaz-b@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/27 20:24:49 by jadiaz-b          #+#    #+#             */
/*   Updated: 2024/02/27 20:29:46 by jadiaz-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_lstadd_back(t_list **lst, t_list *new)

{
   if (!lst)
       return (NULL);
	   while (lst->next != NULL)
   {
       lst = lst->next;
   }
   return (lst);
  
   if (!new)
	   return (NULL);
   else 
	  lst = lst->new;
   	return (lst);
}
