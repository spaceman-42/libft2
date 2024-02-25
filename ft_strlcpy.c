/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jadiaz-b <jadiaz-b@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 12:24:16 by jadiaz-b          #+#    #+#             */
/*   Updated: 2024/02/25 18:36:00 by jadiaz-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	len;
	size_t	i;

	if (dstsize == 0)
		return (ft_strlen(src));
	len = 0;
	while (src[len] != '\0')
		++len;
	i = 0;
	while (src[i] != '\0' && i < (dstsize - 1))
	{
		dst[i] = src[i];
		++i;
	}
	dst[i] = '\0';
	return (len);
}
/*
#include <stdio.h>

int main()
{
	char d[] = "illoooooooo";
	char madrid42[] = "Jacobo";
	printf("%zu", ft_strlcpy(d, madrid42, 100));
	return (0);
}
*/
