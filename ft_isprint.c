/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jadiaz-b <jadiaz-b@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 21:18:09 by jadiaz-b          #+#    #+#             */
/*   Updated: 2024/01/20 22:06:27 by jadiaz-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int c)
{
	{
		if (c >= 32 && c <= 126)
			return (1);
	}
	return (0);
}

/*
#include <stdio.h>
int main()
{
printft("%d\n", ft_isprint('1'));
return (0);
}
*/
