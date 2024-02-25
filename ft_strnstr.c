/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jadiaz-b <jadiaz-b@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 17:48:16 by jadiaz-b          #+#    #+#             */
/*   Updated: 2024/02/25 18:34:45 by jadiaz-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (needle[0] == '\0')
		return ((char *) haystack);
	while (haystack[i] != '\0' && i < len)
	{
		j = 0;
		while (haystack[i + j] == needle[j] && i + j < len)
		{
			if (needle[j + 1] == '\0')
				return ((char *) &haystack[i]);
			j++;
		}
		i++;
	}
	return (NULL);
}
/*
#include <stdio.h>
#include <string.h>

int main(void)
{
//	printf("%s", ft_strnstr("paco programa del mal", "del", -1));
	printf("%s", strnstr("paco programa del mal", "del", -1));
	return (0);
}

DESCRIPTION
    
The strnstr() function locates the first occurrence of the null-termi-
nated string needle in the string haystack, where not more than len 
characters are searched.  
Characters that appear after a `\0' character are
not searched.  
Since the strnstr() function is a FreeBSD specific API, 
it should only be used when portability is not a concern.
While the strcasestr() function uses the current locale, the
strcasestr_l() function may be passed a locale directly. 
See xlocale(3)
for more information.

RETURN VALUES
 If needle is an empty string, haystack is returned; if needle occurs
 nowhere in haystack, NULL is returned; otherwise a pointer to the first
 character of the first occurrence of needle is returned.  */
