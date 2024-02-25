/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jadiaz-b <jadiaz-b@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 20:57:02 by jadiaz-b          #+#    #+#             */
/*   Updated: 2024/02/25 18:09:06 by jadiaz-b         ###   ########.fr       */
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
	char arr[10] = "Vamos Jacobo!";
	size_t n;

	n = 3;
  // Print the array before excuting bzero
  printf("Pre  bzero: %s\n", arr + 2);
  // bzero is used to clean the array
  ft_bzero(arr + 2, n);
  // Printf once bzero has been used 
    printf("Post  bzero: %s\n", arr);
  // Return 0 to show a well done execution
  return (0);
}
*/
/* As a good alternative */
/* #include "libft.h" */
/*
void	ft_bzero(void *s, size_t n) 
{
	ft_memset(s, 0, n); */
/* it deletes the data inside the n bytes of the memory */
/*  it starts by the laocation pointed by s,*/
/*  writes as many (0) in that area */
/* } */
