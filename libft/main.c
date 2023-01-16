#include <stdio.h>
#include "libft.h"
#include <string.h>
// #include <bsd/string.h>

void sep(void)
{
	char    sep[14] = "\n----------\n\n";

	printf("%s", sep);
}

int	main(void)
{
	char str[6] = "hello";
	char str2[6] = "hello";

	sep();

	// ISALNUM
	
	printf("isalnum\n");
	printf("@ returns %d\n", ft_isalnum('@'));
	printf("5 returns %d\n", ft_isalnum('5'));
	printf("a returns %d\n", ft_isalnum('a'));
	sep();

	//ISALPHA
	
	printf("isalpha\n");
	printf("@ returns %d\n", ft_isalpha('@'));
	printf("5 returns %d\n", ft_isalpha('5'));
	printf("a returns %d\n", ft_isalpha('a'));
	sep();

	//ISASCII
	
	printf("isascii\n");
	printf("@ returns %d\n", ft_isascii('@'));
	printf("5 returns %d\n", ft_isascii('5'));
	printf("a returns %d\n", ft_isascii('a'));
	sep();

	//ISDIGIT
	
	printf("isdigit\n");
	printf("@ returns %d\n", ft_isdigit('@'));
	printf("5 returns %d\n", ft_isdigit('5'));
	printf("a returns %d\n", ft_isdigit('a'));
	sep();

	//ISPRINT
	
	printf("isprint\n");
	printf("@ returns %d\n", ft_isprint('@'));
	printf("5 returns %d\n", ft_isprint('5'));
	printf("a returns %d\n", ft_isprint('a'));
	sep();

	//STRLEN
	
	printf("strlen\n");
	printf("hello has %d letters\n", ft_strlen("hello"));
	sep();

	//TOUPPER TOLOWER
	
	printf("to upper and lower\n");
	printf("a to upper  returns %c\n", ft_toupper('a'));
	printf("A to lower returns %c\n", ft_tolower('A'));
	sep();

	// ATOI
	
	printf("atoi\n");
	printf("+054  returns %d\n", ft_atoi("+054"));
	sep();

	//STRCHR
	
	printf("strchr\n");
	printf("hi i am a string returns %s\n", ft_strchr("hi i am a string", 'a'));
	printf("real function returns %s\n", strchr("hi i am a string", 'a'));
	sep();
	printf("strrchr\n");

	// STRRCHR
	
	printf("hi i am a string returns %s\n", ft_strrchr("hi i am a string", 'a'));
	printf("real function returns %s\n", strrchr("hi i am a string", 'a'));
	sep();

	// STRNCMP
	
	printf("strncmp\n");
	printf("hello and helio returns %p\n", ft_strncmp("hello", "helio", 4));
	printf("real function returns %d\n", strncmp("hello", "helio", 4));
	sep();

	// MEMSET
	
	printf("memset\n");
	memset(str, 'x', 3);
	printf("memset(hello, 'x', 3) returns %s\n", str);
	ft_memset(str2, 'x', 3);
	printf("ft_memset returns %s\n", str2);
	sep();

	// BZERO
	
	printf("bzero\n");
	bzero(str+2, 2);
	printf("bzero returns %s\n", str);
	ft_bzero(str2+2, 2);
	printf("ft_bzero returns %s\n", str2);
	sep();
	
	// REINITIALIZE TEST STRINGS
	ft_memset(str, 'a', 5);
	ft_memset(str2,'z', 5);

	// MEMCPY
	
	printf("memcpy\n");
	memcpy(str, str2, 3);
	printf("memcpy with dest 'aaaaa' src 'zzzzz' 3 returns %s\n", str);

	// REINIT STR
	ft_memset(str, 'a', 5);
	ft_memset(str2, 'z', 5);
	//
	ft_memcpy(str, str2, 3);
	printf("ft_memcpy with dest 'aaaaa' and src 'zzzzz' 3 returns %s\n", str);
	sep();
	
	// MEMCMP
	printf("memcmp\n");
	printf("for strings zzzaa and zzzzz, memcmp returns %d\n", memcmp(str, str2, sizeof(str)));
	printf("for strings zzzaa and zzzzz, ft_memcmp returns %d\n", ft_memcmp(str, str2, sizeof(str)));
	sep();

	// MEMCHR
	printf("memchr\n");
	printf("%s %s", str, str2);

	// STRLCAT
	// printf("strlcat\n");
	// printf("strlcat returns %d\n", strlcat(str, str2, (sizeof(str) + sizeof(str2) +1)));

	// STRLCPY 
	
	//printf("strlcpy\n");
	//printf("hello and hello returns %d\n", ft_strlcpy("hello", "hello", 5));
	// sep();
	return 0;
}
