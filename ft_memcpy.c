/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jadiaz-b <jadiaz-b@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/13 12:33:08 by jadiaz-b          #+#    #+#             */
/*   Updated: 2024/02/25 21:19:51 by jadiaz-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char	*csrc;
	unsigned char	*cdst;
	size_t			i;

	csrc = (unsigned char *)src;
	cdst = (unsigned char *)dst;
	i = 0;
	if (csrc == 0 && cdst == 0)
		return (NULL);
	while (i < n)
	{
		cdst[i] = csrc[i];
		i++;
	}
	return (dst);
}
/*
#include <string.h>
#include <stdio.h>
#include <stddef.h>

int main ()
{
    //char origen[] = "hola mundo";
    //char destino[7];
    printf("%s", ft_memcpy(((void *) 0), ((void *) 0), 0));
    printf("%s", memcpy(((void *) 0), ((void *) 0), 0));
    return(0);
}
*/
