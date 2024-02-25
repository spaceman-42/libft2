/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jadiaz-b <jadiaz-b@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/14 19:14:51 by jadiaz-b          #+#    #+#             */
/*   Updated: 2024/02/25 18:36:33 by jadiaz-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = ft_strlen(s);
	while (i >= 0)
	{
		if (s[i] == (unsigned char)c)
			return ((char *)&s[i]);
		i--;
	}
	return (0);
}
/*
#include <stdio.h>

char	*ft_strrchr(const char *s, int c)
{
	while (*s)
	{
		if (*s == (char)c)
			return ((char *)s);
		s--;// pruebo con -- en vez de ++ NO FUNCIONA
	}
	if ((char)c == '\0')
		return ((char *)s);
	return (0);
}
int	main()
{
const char s[] = "Hello, world!";
const char c = 'l';
char *p;
  p = ft_strchr(s, c);
 printf("Result: %s\n", p);
}
*/
/* Esta basada en la anterior strchr:
 * #include <stdio.h>

char	*ft_strrchr(const char *s, int c)
{
while (*s != c && c != '\0')
	{
	s++;
	}
if (*s == c)
	{
     return (char *)s;
 	}
	else
	{
	return NULL;
	}
}

int main() {ls
 const char str[] = "Hello, world!";
 char *pos = my_strrchr(str, ',');
 if (pos != NULL) {
     printf("Found '%c' at position %ld\n", ',', pos - str);
 } else {
     printf("Character not found\n");
 }
 return 0;
} */
