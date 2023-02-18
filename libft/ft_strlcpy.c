/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cvidot <cvidot@student.42prague.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 14:29:38 by cvidot            #+#    #+#             */
/*   Updated: 2023/01/11 17:13:01 by cvidot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	len;

	i = 0;
	len = ft_strlen(src);
	if (size != 0)
	{
		while (i < size - 1 && src[i] != '\0')
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = '\0';
	}
	return (len);
}
/*strlcpy() copy strings. It takes the full size 
of the buffer (not just the length) 
and guarantee to NUL-terminate the result (as long 
as size is larger than 0). 
The strlcpy() function copies up to size - 1 
characters from the NUL-terminated string src to dst, 
NUL-terminating the result. RETURN VALUE:the length of src.*/
