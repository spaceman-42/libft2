/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jadiaz-b <jadiaz-b@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/28 16:23:39 by jadiaz-b          #+#    #+#             */
/*   Updated: 2024/02/03 16:10:56 by jadiaz-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*s1;
	size_t			i;

	s1 = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		if (*s1 == (unsigned char)c)
			return ((void *)s1);
		i++;
		s1++;
	}
	return (NULL);
}
/*
void *ft_memchr(const void *s, int c, size_t n)
{
	char   *s1;

	s1 = (char *)s;

	size_t	i;
//declarar aquí el punetero
	i = 0;
 	if (n == 0)
	 	return(NULL);
 	else
 	{
	 	while (s1[i] != '\0' && i < n)
		{
	 		 if (s1[i] == c)
			 	return (&s1[i]);
	  		else
		 		 i++;
		}
	}
	return (NULL);
}

int main()
{

}
DESCRIPTION
     The memchr() function locates the first occurrence of c (converted to an
     unsigned char) in string s.

RETURN VALUES
     The memchr() function returns a pointer to the byte located, or NULL if no
     such byte exists within n bytes.
*/
