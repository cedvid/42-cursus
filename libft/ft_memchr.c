/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cvidot <cvidot@student.42prague.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 11:58:02 by cvidot            #+#    #+#             */
/*   Updated: 2023/01/19 12:48:08 by cvidot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*str;
	unsigned char	character;

	i = 0;
	str = (unsigned char *) s;
	character = (unsigned char) c;
	while (i < n)
	{
		if (str[i] == character)
			return ((void *)(str + i));
		i++;
	}
	return (NULL);
}
/*The  memchr()  function  scans  the initial 
n bytes of the 
memory area pointed to by s for the first instance of c.  
Both c and the bytes of the memory area pointed to 
by s are interpreted as unsigned char.*/