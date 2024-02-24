/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jadiaz-b <jadiaz-b@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/12 16:32:08 by jadiaz-b          #+#    #+#             */
/*   Updated: 2024/01/20 22:15:52 by jadiaz-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	size_t	relleno;

	relleno = 0;
	while (relleno < len)
	{
		((char *)b)[relleno] = c;
		relleno++;
	}
	return ((void *)b);
}

/* he utlizado el mismo codigo 
 * que bzero pero igualo a relleno 
 * a int c lo que permite que 
 * envez de un cero se pueda 
 * poenr cualquier elemento en menset
#include <stddef.h>
#inlcude <stdio.h>
#include <string.h>
int main ()
{
	char arr[10] = "Vamos l";
	size_t len;

	char * ptr;


	len = 5;

  // Printf el  array antes de ejcutr bzeroo
  printf("Pre  menset: %s\n", arr);

  // Se usa como  bzero  para limpiar el  array
  ptr = ft_memset(arr, 'd', len);

  // Printf una vez que se ha usado el  bzero
  printf("Post  menset: %s\n", ptr);

  printf("Funcion original: %s\n", memset(arr, 'd', len));
  // Return 0 para indicar que se ha eecutado bien n
  return 0;
}
*/
