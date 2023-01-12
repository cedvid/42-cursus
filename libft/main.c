#include <stdio.h>
#include "libft.h"
#include <string.h>
#include <bsd/string.h>

void sep(void)
{
	char    sep[14] = "\n----------\n\n";

	printf("%s", sep);
}

int	main(void)
{
	sep();
	printf("isalnum\n");
	printf("@ returns %d\n", ft_isalnum('@'));
	printf("5 returns %d\n", ft_isalnum('5'));
	printf("a returns %d\n", ft_isalnum('a'));
	sep();
	printf("isalpha\n");
	printf("@ returns %d\n", ft_isalpha('@'));
	printf("5 returns %d\n", ft_isalpha('5'));
	printf("a returns %d\n", ft_isalpha('a'));
	sep();
	printf("isascii\n");
	printf("@ returns %d\n", ft_isascii('@'));
	printf("5 returns %d\n", ft_isascii('5'));
	printf("a returns %d\n", ft_isascii('a'));
	sep();
	printf("isdigit\n");
	printf("@ returns %d\n", ft_isdigit('@'));
	printf("5 returns %d\n", ft_isdigit('5'));
	printf("a returns %d\n", ft_isdigit('a'));
	sep();
	printf("isprintf\n");
	printf("@ returns %d\n", ft_isprint('@'));
	printf("5 returns %d\n", ft_isprint('5'));
	printf("a returns %d\n", ft_isprint('a'));
	sep();
	printf("strlen\n");
	printf("hello has %d letters\n", ft_strlen("hello"));
	sep();
	printf("to upper and lower\n");
	printf("a to upper  returns %c\n", ft_toupper('a'));
	printf("A to lower returns %c\n", ft_tolower('A'));
	sep();
	printf("atoi\n");
	printf("+054  returns %d\n", ft_atoi("+054"));
	sep();
	printf("strchr\n");
	printf("hi i am a string returns %s\n", ft_strchr("hi i am a string", 'a'));
	printf("real function returns %s\n", strchr("hi i am a string", 'a'));
	sep();
	printf("strlcpy\n");
	printf("real func hello and hello returns %zu\n", strlcpy("hello", "hello", 5));
	sep();
	return 0;
}
