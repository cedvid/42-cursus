#include <stdio.h>
#include "lib.h"

int	main(void)
{
	printf("isalnum\n");
	printf("@ returns %d\n", ft_isalnum('@'));
	printf("5 returns %d\n", ft_isalnum('5'));
	printf("a returns %d\n", ft_isalnum('a'));
	printf("isalpha\n");
	printf("@ returns %d\n", ft_isalpha('@'));
	printf("5 returns %d\n", ft_isalpha('5'));
	printf("a returns %d\n", ft_isalpha('a'));
	printf("isascii\n");
	printf("@ returns %d\n", ft_isascii('@'));
	printf("5 returns %d\n", ft_isascii('5'));
	printf("a returns %d\n", ft_isascii('a'));
	printf("isdigit\n");
	printf("@ returns %d\n", ft_isdigit('@'));
	printf("5 returns %d\n", ft_isdigit('5'));
	printf("a returns %d\n", ft_isdigit('a'));
	printf("isprintf\n");
	printf("@ returns %d\n", ft_isprint('@'));
	printf("5 returns %d\n", ft_isprint('5'));
	printf("a returns %d\n", ft_isprint('a'));
	printf("strlen\n");
	printf("hello has %d letters\n", ft_strlen("hello"));
	printf("helloooooooooooooooooooo hey has %d letters\n", ft_strlen("helloooooooooooooooooooo hey"));
	return 0;
}	
