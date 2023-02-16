/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cvidot <cvidot@student.42prague.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 12:45:02 by cvidot            #+#    #+#             */
/*   Updated: 2023/02/13 12:33:04 by cvidot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include <stdlib.h>
#include <stdio.h>

static int	ft_get_length(int n)
{
	int	length;

	if (n <= 0)
		length = 2;
	else
		length = 1;
	while (n != 0)
	{
		length++;
		n /= 10;
	}
	return (length);
}

char	*ft_itoa(int n)
{
	int		length;
	int		i;
	char	*res;

	length = ft_get_length(n);
	res = malloc(sizeof(char) * length);
	if (!res)
		return (NULL);
	res[length - 1] = '\0';
	if (n == 0)
		return (ft_memcpy(res, "0", length - 1));
	if (n < 0)
	{
		if (n == -2147483648)
			return (ft_memcpy(res, "-2147483648", length - 1));
		res[0] = '-';
		n *= -1;
	}
	i = length - 2;
	while (n != 0)
	{
		res[i--] = (n % 10) + '0';
		n /= 10;
	}
	return (res);
}

/*int main(void)
{
    printf("the result for 2147483647 is %s\n", ft_itoa(2147483647));
    printf("the result for 0 is %s\n", ft_itoa(0));
}*/
// Function name ft_itoa
// Prototype char *ft_itoa(int n);
// Turn in files -
// Parameters n: the integer to convert.
// Return value The string representing the integer.
// NULL if the allocation fails.
// External functs. malloc
// Description Allocates (with malloc(3)) and returns a string
// representing the integer received as an argument.
// Negative numbers must be handled.
