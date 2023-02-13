/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cvidot <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 12:45:22 by cvidot            #+#    #+#             */
/*   Updated: 2023/02/13 11:12:08 by cvidot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
// #include <stdio.h>

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*res;

	i = 0;
	res = (char *)malloc(ft_strlen(s) + 1);
	if (!res)
		return (NULL);
	while (s[i])
	{
		res[i] = f(i, s[i]);
		i++;
	}
	res[i] = '\0';
	return (res);
}

/*char i_to_a(unsigned int i, char c)
{
    if (c == 'i' && i > 0)
        return 'a';
    else
        return c;
}

// int main(void)
// {
//     char *str = "This is the modified string";
//     printf("return value is: %s\n", ft_strmapi(str, i_to_a));
//     return 0;
// }*/

/*Function name ft_strmapi
Prototype char *ft_strmapi(char const *s, char (*f)(unsigned int, char));
Parameters s: The string on which to iterate.
f: The function to apply to each character.
Return value The string created from the successive applications of ’f’.
Returns NULL if the allocation fails.
External functs. malloc
Description Applies the function ’f’ to each character of the
string ’s’, and passing its index as first argument
to create a new string (with malloc(3)) resulting
from successive applications of ’f’.*/
