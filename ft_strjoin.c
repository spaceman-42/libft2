/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jadiaz-b <jadiaz-b@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/08 21:52:08 by jadiaz-b          #+#    #+#             */
/*   Updated: 2024/02/25 19:10:37 by jadiaz-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		i;
	int		len1;
	int		len2;
	char	*s1s2;

	if (s1 && s2)
	{
		len1 = ft_strlen(s1);
		len2 = ft_strlen(s2);
		s1s2 = (char *)malloc(sizeof(char) * (len1 + len2 + 1));
		if (s1s2 == NULL)
			return (NULL);
		i = -1;
		while (s1[++i])
			s1s2[i] = s1[i];
		i = -1;
		while (s2[++i])
		{
			s1s2[len1] = s2[i];
			len1++;
		}
		s1s2[len1] = '\0';
		return (s1s2);
	}
	return (NULL);
}
/* 
#include <stdio.h>
#include <stdlib.h>
	
int main()
{
	printf("%s", ft_strjoin(4, tab, "Test"));
	return (0);
}
******
if (!s1 || !s2)
	return (NULL)
*/
