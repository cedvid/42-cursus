/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cvidot <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 12:46:02 by cvidot            #+#    #+#             */
/*   Updated: 2023/02/13 10:48:55 by cvidot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include <stdio.h>

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;

	i = 0;
	while (s[i])
	{
		f(i, &s[i]);
		i++;
	}
}

/*void i_to_a(unsigned int i, char *c)
{
    if (*c == 'i' && i > 0)
        *c = 'a';
}*/

// int main(void)
// {
//     char str[] = "This is the modified string";
//     ft_striteri(str, i_to_a);
//     printf("the string: %s\n", str);
//     return 0;
// }

/*Function name ft_striteri
Prototype void ft_striteri(char *s, void (*f)(unsigned int, char*));
Parameters s: The string on which to iterate.
f: The function to apply to each character.
Return value None
External functs. None
Description Applies the function ’f’ on each character of
the string passed as argument, passing its index
as first argument. Each character is passed by
address to ’f’ to be modified if necessary.*/
