/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jadiaz-b <jadiaz-b@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 19:54:08 by jadiaz-b          #+#    #+#             */
/*   Updated: 2024/02/25 18:26:17 by jadiaz-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	if ((c > 47 && c < 58) || (c >= 65 && c <= 90)
		|| (c >= 97 && c <= 122))
		return (1);
	return (0);
}
/*#include <stdio.h>
int main ()
{
printf("%d\n", ft_isalnum('1'));
	return (0);
}*/
