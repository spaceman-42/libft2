/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jadiaz-b <jadiaz-b@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/03 16:52:33 by jadiaz-b          #+#    #+#             */
/*   Updated: 2024/02/04 03:03:25 by jadiaz-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	ft_atoi(const char *str)
{
	int	num;
	int	i;
	int	sign;

	num = 0;
	i = 0;
	sign = 1;
	while (str[i] == ' ' || (str[i] >= '\t' && str[i] <= '\r'))
		i++;
	if (str[i] == '-')
		sign = -1;
	if (str[i] == '-' || str[i] == '+')
		i++;
	while (str[i] >= '0' && str[i] <= '9')
	{
		num = num * 10 + (str[i] - 48);
		i++;
	}
	return (num * sign);
}

/* Last while could be (ft_isdigit(str[i))]
#include <stdlib.h>

int	main()
{
	char *str1 = "100000pepa";
    char *str2 = "--200-";
    char *str3 = "-2147483648";
    char *str4 = "2147483647";
	char *str5 = "A-+-3";

	int num1 = atoi(str1);
    int num2 = atoi(str2);
    int num3 = atoi(str3);
    int num4 = atoi(str4);
    int num5 = atoi(str5);
	printf("atoi: %d, %d, %d, %d, %d\n", num1, num2, num3, num4, num5);

	num1 = ft_atoi(str1);
    num2 = ft_atoi(str2);
    num3 = ft_atoi(str3);
    num4 = ft_atoi(str4);
	num5 = ft_atoi(str5);
    printf("ft_atoi: %d, %d, %d, %d, %d\n", num1, num2, num3, num4, num5);

    return 0;
}
 * DESCRIPTION
     The atoi() function converts the initial portion of the string 
	 pointed to by str to int representation.
     It is equivalent to:
           (int)strtol(str, (char **)NULL, 10);
     While the atoi() function uses the current locale, the atoi_l() function
     may be passed a locale directly. See xlocale(3) for more information.
IMPLEMENTATION NOTES
     The atoi() and atoi_l() functions are thread-safe and async-cancel-safe.
     The strtol() and strtol_l() functions are recommended instead of atoi()
     and atoi_l() functions, especially in new code.
ERRORS
     The function atoi() need not affect the value of errno on an error.
HELP
Deal with spaces
*/
