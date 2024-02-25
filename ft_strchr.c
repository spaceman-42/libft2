/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jadiaz-b <jadiaz-b@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/14 18:14:01 by jadiaz-b          #+#    #+#             */
/*   Updated: 2024/02/25 19:11:39 by jadiaz-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	while (*s)
	{
		if (*s == (char)c)
			return ((char *)s);
		s++;
	}
	if ((char)c == '\0')
		return ((char *)s);
	return (0);
}
/*
#include <stdio.h>

int	main()
{
const char s[] = "Hello, world!";
const char c = 'l'; 
char *p;
  p = ft_strchr(s, c);
 printf("Result: %s\n", p);
}
***************
{
	int i;

	i = -1;
	while (s[++i]) 
		// esto es igual a while(s[i]  != '\0')
		// i++;:
	if (s[i] == (char) c)
		return ((char *)&s[i];
	return (NULL);
}
*/