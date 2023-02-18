/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cvidot <cvidot@student.42prague.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/14 12:27:45 by cvidot            #+#    #+#             */
/*   Updated: 2023/01/14 12:32:31 by cvidot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	if (n == 0)
		return ;
	while (n)
	{
		*(char *)s = '\0';
		s++;
		n--;
	}
}
/*The bzero() function erases the data in the 
n bytes of the memory starting 
at the location pointed to by s, by writing zeros 
(bytes containing '\0') to that area.*/
