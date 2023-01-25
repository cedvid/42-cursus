/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cvidot <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 12:44:41 by cvidot            #+#    #+#             */
/*   Updated: 2023/01/16 12:44:53 by cvidot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char    **ft_split(char const *s, char c)
{
    
}
 
/* Function name ft_split
Prototype char **ft_split(char const *s, char c);

Parameters s: The string to be split.
            c: The delimiter character.

Return value The array of new strings resulting from the split.
NULL if the allocation fails.

External functs. malloc, free

Description Allocates (with malloc(3)) and returns an array
of strings obtained by splitting ’s’ using the
character ’c’ as a delimiter. The array must end
with a NULL pointer. */