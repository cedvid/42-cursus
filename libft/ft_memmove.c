/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cvidot <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 09:58:33 by cvidot            #+#    #+#             */
/*   Updated: 2023/01/16 09:58:36 by cvidot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void    *ft_memmove(void *dest, const void *src, size_t n)
{
    unsigned int	i;

	i = 0;
	while (i < n)
	{
		((char *)dest)[i] = ((char *)src)[i];
		i++;
	}
	return (dest);
}

