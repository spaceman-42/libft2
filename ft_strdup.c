/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jadiaz-b <jadiaz-b@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/04 05:02:52 by jadiaz-b          #+#    #+#             */
/*   Updated: 2024/02/25 19:11:49 by jadiaz-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*copia;
	size_t	i;
	size_t	s1len;

	i = 0;
	s1len = ft_strlen(s1);
	copia = (char *) malloc(sizeof(char) * (s1len + 1));
	if (!copia)
		return (NULL);
	while (s1[i])
	{
		copia[i] = s1[i];
		i++;
	}
	copia[i] = '\0';
	return (copia);
}
/*
#include <stdio.h>
#include <stdlib.h>

int	main()
{
	const char	*str1 = "42 Madrid";
	//const char	*str2 = NULL;
	//const char	*str3 = "42";
	//const char	*str4 = "";

	char	*resultado1 = ft_strdup(str1);
	//char	*resultado2 = ft_strdup(str2); 
	//char	*resultado3 = ft_strdup(str3);
	//char	*resultado4 = ft_strdup(str4);

	printf("s1: %s\n", str1);
	printf("copia: %s\n", resultado1);
	free(resultado1);
	
	return (0);
}
*/
