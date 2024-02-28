/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jadiaz-b <jadiaz-b@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/26 13:18:35 by jadiaz-b          #+#    #+#             */
/*   Updated: 2024/02/28 16:23:00 by jadiaz-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	dstlen;
	size_t	i;

	dstlen = ft_strlen(dst);
	i = 0;
	if (dstsize > dstlen)
	{
		while (i + dstlen < dstsize - 1 && src[i])
		{
			dst[dstlen + i] = src[i];
			i++;
		}
		dst[dstlen + i] = '\0';
		return (dstlen + ft_strlen(src));
	}
	return (dstsize + ft_strlen(src));
}
/*
#include <stdio.h>

int main()
{
    char *dst = NULL;
    const char* src = ", World!";
    size_t dstsize = 0;

    size_t result = ft_strlcat(dst, src, dstsize);

    printf("Result: %s\n", dst);
    printf("Return value: %zu\n", result);

	size_t result = strlcat(dst, src, dstsize);
	printf("Result: %s\n", dst);
    printf("Return value: %zu\n", result);

    return 0;
}
*/