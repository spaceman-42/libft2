/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jadiaz-b <jadiaz-b@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 17:02:10 by jadiaz-b          #+#    #+#             */
/*   Updated: 2024/01/21 22:31:51 by jadiaz-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h" 

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*csrc;
	unsigned char	*cdst;
	size_t			i;

	csrc = (unsigned char *)src;
	cdst = (unsigned char *)dst;
	if (cdst == csrc)
		return (dst);
	if (cdst > csrc)
	{
		i = len;
		while (len-- > 0)
			cdst[len] = csrc[len];
	}
	else
	{
		i = 0;
		while (i < len)
		{
			cdst[i] = csrc[i];
			i++;
		}
	}
	return (dst);
}
/* #include <string.h>
 #include <stdio.h>
  devolvemos el ppuntero original como en memcpy
}
int main ()
{
    char origen[] = "hola mundo";
    char destino[] = "2hgvjhjkjhvggvjhjk";
    //printf("%s\n", ft_memmove(destino, origen, 16));
    printf("%s\n", memmove(destino, origen, 16));
    return(0);
}
*/
