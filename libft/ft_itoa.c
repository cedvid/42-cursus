/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cvidot <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 12:45:02 by cvidot            #+#    #+#             */
/*   Updated: 2023/01/16 12:45:11 by cvidot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include <stdlib.h>
#include <stdio.h>

char *ft_itoa(int n)
{
    int tmp;
    int len;
    int i;
    char    *res;

    tmp = n;
    if (n <= 0)
        len = 2;
    else
        len = 1;
    while (tmp != 0)
    {
        len++;
        tmp /= 10;
    }
    res = malloc(sizeof(char) * len);
    if (!res)
        return (NULL);
    res[len - 1] = '\0';
    if (n == 0)
    {
        res[0] = '0';
        return (res);
    }
    if (n < 0)
    {
        if (n == -2147483648)
        {
            ft_strlcpy(res, "-2147483648", len + 1);
            return (res);
        }
        res[0] = '-';
        n *= -1;
    }
    // len - 1 is the null character, len -2 is the last digit
    i = len - 2;
    while (n != 0)
    {
        res[i--] = (n % 10) + '0';
        n /= 10;
    }
    return (res);
}

int main(void)
{
    printf("the result for 2147483648 is %s\n", ft_itoa(-2147483648));
}


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