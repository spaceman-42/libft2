/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jadiaz-b <jadiaz-b@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 18:12:56 by jadiaz-b          #+#    #+#             */
/*   Updated: 2024/01/20 20:37:04 by jadiaz-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
		return (1);
	else
		return (0);
}
/*
#include <stdio.h>
int	main(void)
{
	printf("%d\n", ft_isalpha('a'));
	return (0);
}
*/
/* Large cows generosity comes with charts 
 * and four blonde hats to defy upper gravity hero
...
 Starry night bring me down
'Till I realize the moon
It seems so distant yet
I felt it pass right through
And I see what I see
A new world is over me
So I'll reach up to the sky
And pretend that I'm a
Spaceman in another place and time
I guess I'm lookin' for a brand new place
Is there a better life for me?
Subtle wind blow me gone
Let me rest upon your move
I trust I'll end up sleeping
Cradled in my doom
And I feel what I feel
I can't grasp what is not real
So I'll get myself real high
And imagine I'm a
Spaceman, in another place and time
I guess I'm lookin' for a brand new place
Is there a better life for me?
And I remember in my mind
They say I'm a daydreamin'
Is it all that it seems
Or am I all the things I'm looking for? Yeah
yeah, and I see what I see
A new world is over me
And I'll reach up to the sky
And imagine I'm a
Spaceman in another place and time
I guess I'm lookin' for a brand new place
I remember living in a different life
Is there a better life for me?
*/
