/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jadiaz-b <jadiaz-b@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/09 13:51:05 by jadiaz-b          #+#    #+#             */
/*   Updated: 2024/02/10 21:59:18 by jadiaz-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	end;
	char	*strfinal;

	if (!s1 || !set)
		return (NULL);
	i = 0;
	end = ft_strlen(s1);
	while (s1[i] != 0 && ft_strchr(set, s1[i]) != 0)
	{
		i++;
	}
	while (end > i && ft_strchr(set, s1[end - 1]) != 0)
	{
		end--;
	}
	strfinal = ft_substr(s1, i, end - i);
	return (strfinal);
}
/*
#include <stdlib.h> 
int main()
{
    char const *s1 = ". ,1Hola, Mundo1! .,,";
    char const *set = " .,1";
    char *result;

    result = ft_strtrim(s1, set);

    if (result != NULL)
    {
        printf("Original string: '%s'\n", s1);
		printf("String  set: '%s'\n", set);
        printf("String fina, trimmed: '%s'\n", result);
        free(result);  // Do not forget to free the memory
 	}
    else
    {
        printf("Misatke.\n");
    }

    return 0;
}
*/
