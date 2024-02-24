/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jadiaz-b <jadiaz-b@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 17:42:49 by jadiaz-b          #+#    #+#             */
/*   Updated: 2024/02/03 16:14:52 by jadiaz-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	i;
	char	*s3;
	char	*s4;

	s3 = (char *) s1;
	s4 = (char *)s2;
	i = 0;
	while (i < n && s3[i] == s4[i])
		i++;
	if (i == n)
		return (0);
	else
		return ((unsigned char)s3[i] - (unsigned char)s4[i]);
}

// comparado con el ft_strncmp
/*
int main()
{

}
*/
	/*
DESCRIPTION
     The memcmp() function compares byte string s1 against byte string s2.
     Both strings are assumed to be n bytes long.

RETURN VALUES
     The memcmp() function returns zero if the two strings are identical, oth-
     erwise returns the difference between the first two differing bytes
     (treated as unsigned char values, so that `\200' is greater than `\0',
     for example).  Zero-length strings are always identical.  This behavior
     is not required by C and portable code should only depend on the sign of
     the returned value.
	*/
