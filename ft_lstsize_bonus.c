/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jadiaz-b <jadiaz-b@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/27 16:53:48 by jadiaz-b          #+#    #+#             */
/*   Updated: 2024/02/27 18:10:23 by jadiaz-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	counter;

	counter = 0;
	while (lst != NULL)
	{
		counter++;
		lst = lst->next;
	}
	return (counter);
}
/*
*#include <stdlib.h>
#include <stdio.h>

int	main(void)
{
	t_list	l;
	int *counter = (int *)malloc(sizeof(int));
	*counter = 9;
	l = *ft_lstnew((void *) counter);
	printf("%d", ft_lstsize(&l));
	return (0);
}*/
