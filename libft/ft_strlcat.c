/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cvidot <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/13 13:23:33 by cvidot            #+#    #+#             */
/*   Updated: 2023/01/19 15:30:18 by cvidot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
// #include <stdio.h>
// #include <string.h>
// #include <bsd/string.h>

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	unsigned int	i;
	unsigned int	dst_len;
	unsigned int	src_len;

	i = 0;
	dst_len = ft_strlen(dst);
	src_len = ft_strlen(src);
	while (src[i] && i < size - dst_len -1)
	{
		dst[dst_len + i] = src[i];
		i++;
	}
	dst[dst_len + i] = '\0';
	if (size < dst_len)
		return (size + src_len);
	else
		return (dst_len + i);
}

// int main(void)
// {
// 	char dest[20] = "hello";
// 	char dest2[20] = "hello";
	
// 	// printf("return value is %zu\n\n", ft_strlcat(dest, "lorem ipsum dolor sit amet", 15));
// 	// printf("real return value is %zu\n\n", strlcat(dest2, "lorem ipsum dolor sit amet", 15));
// 	// printf("return value is %zu\n\n", ft_strlcat(dest, "lorem ipsum dolor sit amet", 0));
// 	// printf("real return value is %zu\n\n", strlcat(dest2, "lorem ipsum dolor sit amet", 0));
// 	// printf("return value is %zu\n\n", ft_strlcat(dest, "lorem ipsum dolor sit amet", 1));
// 	// printf("real return value is %zu\n\n", strlcat(dest2, "lorem ipsum dolor sit amet", 1));
// 	// printf("return value is %zu\n\n", ft_strlcat(dest, "lorem ipsum dolor sit amet", 5));
// 	// printf("real return value is %zu\n\n", strlcat(dest2, "lorem ipsum dolor sit amet", 5));
// 	printf("\nreturn value is %zu\n", ft_strlcat(dest, "lorem ipsum dolor sit amet", 6));
// 	printf("real return value is %zu\n", strlcat(dest2, "lorem ipsum dolor sit amet", 6));
// 	// printf("return value is %zu\n\n", ft_strlcat(dest, "lorem ipsum dolor sit amet", 15));
// 	// printf("real return value is %zu\n\n", strlcat(dest2, "lorem ipsum dolor sit amet", 15));

// 	printf("\ndest is:%s\n", dest);
// 	printf("\ndest2 is:%s\n", dest2);
// }
		
