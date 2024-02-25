/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jadiaz-b <jadiaz-b@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/17 13:30:58 by jadiaz-b          #+#    #+#             */
/*   Updated: 2024/02/25 18:30:21 by jadiaz-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	write (fd, &c, 1);
}
/*
#include <unistd.h>

 *int	main ()
{

}
write
c: El carácter a enviar.
fd: El file descriptor sobre el que escribir.
Envía el carácter ’c’ al file descriptor especificado.
 
*/
