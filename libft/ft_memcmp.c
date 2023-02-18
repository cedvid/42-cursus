/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cvidot <cvidot@student.42prague.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 10:32:37 by cvidot            #+#    #+#             */
/*   Updated: 2023/01/19 13:00:35 by cvidot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*str1;
	unsigned char	*str2;
	size_t			i;

	i = 0;
	str1 = (unsigned char *) s1;
	str2 = (unsigned char *) s2;
	while (i < n)
	{
		if (str1[i] != str2[i])
			return (str1[i] - str2[i]);
		i++;
	}
	return (0);
}
/*The memcmp() function compares the first n bytes (each interpreted as unsigned char) of the memory areas s1 and s2.
RETURN VALUE: An integer less than, equal to, or greater than zero if the first n bytes of s1 is found, 
respectively, to be less than, to match, or be greater than the first n bytes of s2.
For a nonzero return value, the sign is determined by the sign of the difference between the first pair of bytes 
(interpreted as unsigned char) that differ in s1 and s2. If n is zero, the return value is zero.*/
