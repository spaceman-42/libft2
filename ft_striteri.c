/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jadiaz-b <jadiaz-b@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/16 20:22:56 by jadiaz-b          #+#    #+#             */
/*   Updated: 2024/02/25 19:11:49 by jadiaz-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;

	i = 0;
	if (!s || !f)
		return ;
	while (s[i])
	{
		f(i, &s[i]);
		i++;
	}
}
/*
#include <stdio.h>

void print_index_and_char(unsigned int index, char c) 
{
    printf("Character at index %u is '%c'\n", index, c);
}

int main()
{
    char my_string[] = "¡Hola, 42!";
    ft_striteri(my_string, print_index_and_char);
    return  0;
}


Descripción
A cada carácter de la string ’s’, aplica la función ’f’ dando como parámetros
el índice de cada carácter dentro de ’s’ y la dirección del propio carácter,
que podrá modificarse si es necesario.
Description
Applies the function f to each character of the string passed as argument,
and passing its index as first argument. Each character is passed by address
to f to be modified if necessary.
Descripción
A cada carácter de la string ’s’, aplica la función ’f’ dando como parámetros
el índice de cada carácter dentro de ’s’ y la dirección del propio carácter, 
que podrá modificarse si es necesario.
Description
Applies the function f to each character of the string passed as argument,
and passing its index as first argument. Each character is passed by address 
to f to be modified if necessary.

Parameters 1 & 2
The string to iterate.
The function to apply to each character of s and its index
 ft_striteri which is a custom implementation of the striteri function,
 a function found in some string manipulation libraries like the one provided
 by the C Standard Library's string.h header. The ft_striteri function applies
 a given function to each character of a string, passing the index 
 of the character and the character itself to the given function.

Here's a breakdown of the function:

#include "libft.h": This is an include directive that includes a header 
file named libft.h. This header file contain the declaration of the 
ft_striteri function, as well as other related functions and type definitions.

void ft_striteri(char *s, void (*f)(unsigned int, char*)): This is the 
function signature. 

The function ft_striteri takes two arguments:

char *s: This is a pointer to a character array, which is essentially 
a string in C.
The function will iterate over this string.

void (*f)(unsigned int, char*): This is a function pointer. 
It points to a function that takes an unsigned integer and a character 
pointer as arguments and returns nothing (void). This function will be 
applied to each character in the string s.
unsigned int i;: This declares an unsigned integer i which will be used 
as the 
index of the characters in the string s.

i = 0;: This initializes the index i to 0.

if (!s || !f) return (NULL);: This is a check to ensure that neither the string 
s nor the function f is NULL. If either is NULL, the function returns 
immediately.

while (s[i]): This is a loop that continues as long as the character at 
index i in the string s is not the null character ('\0'), which marks the 
end of the string in C.

f(i, s[i]);: Inside the loop, the function f is called with the
current index i and the character at that index in the string s.

i++;: After the function f is called, the index i is incremented to 
move to the next character in the string.

The function ft_striteri does not return a value, as it is declared 
with a void return type. The purpose of this function is to apply
a function to each character in a string along with its index, without
creating a new string..
*/
