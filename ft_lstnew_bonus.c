/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jadiaz-b <jadiaz-b@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 15:55:58 by jadiaz-b          #+#    #+#             */
/*   Updated: 2024/02/25 19:38:50 by jadiaz-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*node;

	node = (t_list *) malloc(sizeof(t_list));
	if (!node)
		return (0);
	node->content = content;
	node->next = NULL;
	return (node);
}
/*
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int content = 1;

    t_list *node = ft_lstnew(&content);
	printf("Content: %d\n", *(int *)(node->content));
    printf("Address: %p\n", (void *)(node));
    free(node);

    return (0);
}*/
