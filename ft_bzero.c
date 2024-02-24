/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jadiaz-b <jadiaz-b@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 20:57:02 by jadiaz-b          #+#    #+#             */
/*   Updated: 2024/01/20 20:51:40 by jadiaz-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t	relleno;

	relleno = 0;
	while (relleno < n)
	{
		((char *)s)[relleno] = 0;
		relleno++;
	}
}
/*
#include <stdio.h>
#include <strings.h>
int main ()
{
	char arr[10] = "Vamos";
	size_t n;

	n = 3;
  // Printf el  array antes de ejcutr bzeroo
  printf("Pre  bzero: %s\n", arr + 2);
  // Se usa  bzero  para limpiar el  array
  ft_bzero(arr + 2, n);
  // Printf una vez que se ha usado el  bzero
  printf("Post  bzero: %s\n", arr);
  // Return 0 para indicar que se ha ejecutado bien n
  return 0;
}
*/
/* Como alternativa puedo usar */
/* #include "libft.h" */
/*
void	ft_bzero(void *s, size_t n) 
{
	ft_memset(s, 0, n); */
/* borra los datos en los n bytes de la memoria */
/*  comenzando en la ubicación señalada por s,*/
/*  escribiendo ceros (0) en esa área */
/* } es una solución ás limpia pero menos instructiva*/
