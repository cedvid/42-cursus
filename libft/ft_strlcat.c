/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cvidot <cvidot@student.42prague.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/13 13:23:33 by cvidot            #+#    #+#             */
/*   Updated: 2023/01/19 15:30:18 by cvidot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	dst_len;
	size_t	src_len;
	size_t	len;
	size_t	i;

	i = 0;
	dst_len = ft_strlen(dst);
	src_len = ft_strlen(src);
	len = dst_len + src_len;
	if (size <= dst_len)
		return (size + src_len);
	while (src[i] != '\0' && i < size - dst_len -1)
	{
		dst[dst_len + i] = src[i];
		i++;
	}
	dst[dst_len + i] = '\0';
	return (len);
}
/*strlcat() concatenate strings. It takes
the full size of the buffer (not just the length) 
and guarantee to NUL-terminate the result (as long 
as there is at least one byte free in dst).
Note that a byte for the NUL should be included in size.
The strlcat() function appends the 
NUL-terminated string src to the end of dst.  
It will append at most size - strlen(dst) - 1 bytes,
 NUL-terminating the result.
RETURN VALUE: the initial length of dst plus the length of src.*/
