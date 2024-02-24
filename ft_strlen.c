/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jadiaz-b <jadiaz-b@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 14:50:30 by jadiaz-b          #+#    #+#             */
/*   Updated: 2024/01/20 22:09:36 by jadiaz-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *s)
{
	size_t	d;

	d = 0;
	while (s[d] != '\0')
		d++;
	return (d);
}
/*
#include <stdio.h>
#include <string.h>

int	main(void)
{
	const char	*s = "de vuelta en 42!";
		//el NULL es para ver que la funciona original y la mia petan igual;
	char *ptr = NULL;

//	printf("Longitud: %lu\n", strlen(ptr));

	printf("%lu\n", ft_strlen(ptr));
	return (0);
}
*/
