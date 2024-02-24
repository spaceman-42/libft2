/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jadiaz-b <jadiaz-b@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 20:47:50 by jadiaz-b          #+#    #+#             */
/*   Updated: 2024/01/20 21:26:41 by jadiaz-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <ctype.h>

int	ft_tolower(int c)
{
	if ((c >= 65 && c <= 90))
		return (c + 32);
	else
		return (c);
}
/*
int main()
{
printf("%c\n", ft_tolower('A'));
return (0);
}
*/
