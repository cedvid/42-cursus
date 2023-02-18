/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cvidot <cvidot@student.42prague.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 09:58:33 by cvidot            #+#    #+#             */
/*   Updated: 2023/01/19 14:07:26 by cvidot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char	*tmp;

	tmp = (char *)malloc(sizeof(char) * n);
	ft_memcpy(tmp, src, n);
	ft_memcpy(dest, tmp, n);
	free(tmp);
	return (dest);
}
/*The  memmove()  function copies n bytes from 
memory area src to memory area dest.  
The memory areas may overlap: copying takes place 
as though the bytes in src are first copied into a
temporary array that does not overlap src or dest, 
and the bytes are then copied from the 
temporary array to dest.
RETURN VALUE: pointer to dest.*/