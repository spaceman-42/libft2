/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jadiaz-b <jadiaz-b@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/16 13:56:22 by jadiaz-b          #+#    #+#             */
/*   Updated: 2024/02/18 02:45:30 by jadiaz-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdlib.h>

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int		len;
	char	*result;
	size_t	i;

	result = 0;
	i = 0;
	len = ft_strlen(s);
	if (!s || !f)
		return (NULL);
	result = (char *)malloc((len + 1) * sizeof(char));
	if (!result)
		return (NULL);
	while (s[i])
	{
		result[i] = f(i, s[i]);
		i++;
	}
	result[i] = 0;
	return (result);
}
/*
int	main()
{
	char const *s;
	
	*s = "hello";
	char *result = ft_strmapi(s, ft_toupper);
	if (result)
	{
	printf("%s\n", result);
	free (result);
	}
	return (0);
}
*/
