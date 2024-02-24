/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jadiaz-b <jadiaz-b@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/23 20:43:53 by jadiaz-b          #+#    #+#             */
/*   Updated: 2024/02/24 13:19:53 by jadiaz-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static size_t	count_n(int n)
{
	size_t	count;

	count = 0;
	if (n < 0)
	{
		n = -n; // Make n positive for counting digits
	}
	while (n != 0)
	{
		n /= 10;
		count++;
	}
	return (count);
}

static char	*allocate_memory(size_t len)
{
	char	*str;

	str = (char *)malloc((len + 1) * sizeof(char));
	if (!str)
		return (NULL);
	*(str + len) = 0;
	return (str);
}

static void	fill_str(char *str, long num, size_t len, int is_negative)
{
	size_t	i;

	i = len;
	while (i > 0)
	{
		str[--i] = (num % 10) + '0';
			// Use post-decrement to correctly place digits
		num /= 10;
	}
	if (is_negative)
	{
		str[0] = '-';
	}
}

char	*ft_itoa(int n)
{
	int		is_negative;
	long	num;
	size_t	len;
	char	*str;

	is_negative = 0;
	num = n;
	if (n < 0)
	{
		is_negative = 1;
		num = -num; // Make n positive for counting digits
	}
	len = count_n((int)num);
	len = is_negative ? len + 1 : len; // Add  1 if negative
	str = allocate_memory(len);
	if (!str)
		return (NULL);
	fill_str(str, num, len, is_negative);
	return (str);
}
/*
***********************************
#include "libft.h"
#include <stdlib.h>

static size_t	count_n(int n)
{
	size_t	count;

	count = 0;
	if (n ==  0)
	{
		return (1);
	}
	while (n !=  0)
	{
		n /=  10;
		count++;
	}
	return (count);
}

static size_t	handle_negative(int n, size_t len)
{
	if (n < 0)
			{
			len++;
			}
		return (len);
}

static char	*allocate_memory(size_t len)
{
	char	*str;

	str = (char *)malloc((len +  1) * sizeof(char));
	if (!str)
		return (NULL);
	*(str + len) =  0;
	return (str);
}

static void	fill_str(char *str, long num, size_t len)
{
	size_t	i;

	i = len;
	while (i >  0 && i--)
	{
		str[i] = num %  10 + '0';
		num /=  10;
	}
	if (num <  0)
	{
		str[0] = '-';
	}
}
char	*ft_itoa(int n)
{
	size_t	len;
	long	num;
	char	*str;

	len = count_n(n);
	num = n;
	if (n <  0)
	{
		num *= -1;
	}
	len = handle_negative(n, len);
	str = allocate_memory(len);
	if (!str)
		return (NULL);
	fill_str(str, num, len);
	return (str);
}
 *********************************
#include "libft.h"

static long	rev_num(long n)
{
	if (n < 0)
		return (-n);
	else
		return (n);
}

static int	count_len(int n)
{
	int	len;

	len = 0;
	if (n == 0)
		return (1);
	while (n != 0)
	{
		n /= 10;
		len ++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	char	*fin;
	int		len;

	len = count_len (n);
	if (n < 0)
		len ++;
	fin = (char *) malloc (sizeof (char) * (len + 1));
	if (!fin)
		return (0);
	fin[len] = '\0';
	if (n == 0)
	{
		fin[0] = '0';
		return (fin);
	}
	while (n != 0)
	{
		fin[len - 1] = rev_num (n % 10) + '0';
		len --;
		n = rev_num (n / 10);
	}
	if (len - 1 == 0)
		fin[len - 1] = '-';
	return (fin);
}*/
