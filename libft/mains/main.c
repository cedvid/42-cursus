#include <stdio.h>
#include "libft.h"
#include <string.h>
#include <bsd/string.h>

static void print_title(char *str)
{
	char    line[20] = "-------------------";
	printf("%s\n", line);
	printf("%s\n", str);
	printf("%s\n\n", line);
}

int	main(void)
{
	// ATOI
	print_title("ATOI");

	printf("+054  return value: %d\n", ft_atoi("+054"));
	printf("-2147483647  return value: %d\n", ft_atoi("-2147483647"));
	printf("\'not a number\'  return value: %d\n", ft_atoi("not a number"));
	printf("\n\n");

	// BZERO
	print_title("BZERO");
	char bzero_str[] = "Hello World";
	printf("Original string: %s\n", bzero_str);
	ft_bzero(bzero_str+4, 5);
	printf("After ft_bzero(str+4, 5): %s\n", bzero_str);
	char bzero_str2[] = "Hello World";
	bzero(bzero_str2+4, 5);
	printf("Real bzero(str+4, 5): %s\n", bzero_str2);
	printf("\n\n");

	//CALLOC
	print_title("CALLOC");
	int nmemb = 5;
	int *ptr = ft_calloc(nmemb, sizeof(int));
    if (!ptr)
	{
		printf("Calloc failed.\n");
		return 1;
	}
	printf("ft_calloc(5, sizeof(int)):\n");
    for (int i = 0; i < nmemb; i++)
	{
        printf("%d ", ptr[i]);
    }
    free(ptr);
	printf("\n\n");

	// ISALNUM
	print_title("ISALNUM");
	printf("@ return value: %d\n", ft_isalnum('@'));
	printf("5 return value: %d\n", ft_isalnum('5'));
	printf("a return value: %d\n", ft_isalnum('a'));
	printf("\n\n");

	//ISALPHA
	print_title("ISALPHA");
	printf("@ return value: %d\n", ft_isalpha('@'));
	printf("5 return value: %d\n", ft_isalpha('5'));
	printf("a return value: %d\n", ft_isalpha('a'));
	printf("\n\n");

	//ISASCII
	print_title("ISASCII");
	printf("@ return value: %d\n", ft_isascii('@'));
	printf("a return value: %d\n", ft_isascii('a'));
	printf("\n\n");

	//ISDIGIT
	print_title("ISDIGIT");
	printf("@ return value: %d\n", ft_isdigit('@'));
	printf("5 return value: %d\n", ft_isdigit('5'));
	printf("a return value: %d\n", ft_isdigit('a'));
	printf("\n\n");

	//ISPRINT
	print_title("ISPRINT");
	printf("@ return value: %d\n", ft_isprint('@'));
	printf("5 return value: %d\n", ft_isprint('5'));
	printf("\n\n");

	// MEMCHR
	print_title("MEMCHR");
	char memchr_str[] = "This is a string";
	char c = 'a';
	printf("For \'%s\' ", memchr_str); 
	printf("ft_memchr returns: %s\n", (char *)ft_memchr(memchr_str, c, ft_strlen(memchr_str)));
	printf("Real memchr returns: %s\n", (char *)memchr(memchr_str, c, ft_strlen(memchr_str)));
	printf("\n\n");

	//MEMCMP
	print_title("MEMCMP");
	char memcmp_str[] = "Hello world";
	char memcmp_str2[] = "Aloha world";
	printf("For strings \'%s\' and \'%s\'\n", memcmp_str, memcmp_str2);
	printf("ft_memcmp(s1, s2, 4) returns: %d\n", ft_memcmp(memcmp_str, memcmp_str2, 4));
	printf("Real memcmp(s1, s2, 4) returns: %d\n", memcmp(memcmp_str, memcmp_str2, 4));
	printf("\n\n");
	
	// MEMCPY
	print_title("MEMCPY");
	char memcpy_dst[] = "Hello";
	char memcpy_src[] = "Aloha";
	char memcpy_dst2[] = "Hello";
	char memcpy_src2[] = "Aloha";
	printf("Before, dest:\'%s\' src:\'%s\'\n", memcpy_dst, memcpy_src);
	ft_memcpy(memcpy_dst, memcpy_src, 3);
	memcpy(memcpy_dst2, memcpy_src2, 3);
	printf("After ft_memcpy(dst, src, 3)\ndest: %s\n", memcpy_dst);
	printf("After real memcpy(dst, src, 3)\ndest: %s\n", memcpy_dst2);
	printf("\n\n");

	//MEMMOVE
	print_title("MEMMOVE");
	char memmove_str[] = "hello world";
	printf("Before: \'%s\'\n", memmove_str);
	printf("After ft_memmove(str, str+6, 5): ");
	printf("%s\n", (char *)ft_memmove(memmove_str, memmove_str+6, 5));
	printf("\n\n");

	// MEMSET
	print_title("MEMSET");
	char memset_str[] = "Hello";
	printf("Before: %s\n", memset_str);
	printf("After ft_memset, with arguments 'x', 3: %s\n", (char *)ft_memset(memset_str, 'x', 3));
	char memset_str2[] = "Hello";
	printf("Real function returns: %s\n", (char *)memset(memset_str2, 'x', 3));
	printf("\n\n");
	
	//STRCHR
	print_title("STRCHR");
	char strchr_str[] = "This is a regular string";
	printf("For \'%s\' ft_strchr returns: %s\n", strchr_str, ft_strchr(strchr_str, 'a'));
	printf("Real function returns: %s\n", strchr(strchr_str, 'a'));
	printf("\n\n");

	//STRDUP
	print_title("STRDUP");
	char *strdup_str = ft_strdup("Hello");
	printf("String created with strdup: %s\n", strdup_str);
	printf("\n\n");

	// STRLCAT
	print_title("STRLCAT");
	char strlcat_dst[9] = "Hello";
	char strlcat_src[] = "Bye";
	size_t size = ft_strlen(strlcat_dst) + ft_strlen(strlcat_src) + 1;
	printf("For dst:\'%s\' and src:\'%s\'\n", strlcat_dst, strlcat_src);
	printf("Dst becomes: \'%s\', ft_strlcat returns: %ld\n", strlcat_dst, ft_strlcat(strlcat_dst, strlcat_src, size));
	printf("\n\n");

	// STRLCPY 
	print_title("STRLCPY");
	char strlcpy_dst[] = "Hello";
	char strlcpy_src[] = "Salut";
	printf("For \'%s\' and \'%s\'\n", strlcpy_dst, strlcpy_src);
	printf("ft_strlcpy returns: %ld\n", ft_strlcpy(strlcpy_dst+3, strlcpy_src, 3));
	printf("dst becomes: \'%s\'", strlcpy_dst);
	printf("\n\n");

	//STRLEN
	print_title("STRLEN");
	char strlen_str[] = "This is regular string";
	printf("\'%s\' has %d letters\n", strlen_str, ft_strlen(strlen_str));
	printf("\n\n");

	//STRNCMP
	print_title("STRNCMP");
	printf("Returns: %d\n", ft_strncmp("Hello", "Hella", 5));
	printf("\n\n");

	//STRNSTR
	print_title("STRNSTR");
	printf("Returns: %s\n", ft_strnstr("Hello World!", "World", 11));
	printf("\n\n");

	// STRRCHR
	print_title("STRRCHR");
	printf("It should return string: %s", ft_strrchr("It should return string", 's'));
	printf("\n\n");

	//TOUPPER TOLOWER
	print_title("TOUPPER");
	printf("a to upper becomes: %c\n", ft_toupper('a'));
	printf("\n\n");
	print_title("TOLOWER");
	printf("A to lower becomes: %c\n", ft_tolower('A'));
	printf("\n\n");

	return 0;
}
