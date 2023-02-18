#include "libft.h"
#include <stdio.h>

static void print_title(char *str)
{
	char    line[20] = "-------------------";
	printf("%s\n", line);
	printf("%s\n", str);
	printf("%s\n\n", line);
}

static void ft_i_to_a(unsigned int i, char *c)
{
    if (*c == 'i' && i > 0)
        *c = 'a';
}

static char ft_i_to_a2(unsigned int i, char c)
{
    if (c == 'i' && i > 0)
        return 'a';
    else
        return c;
}

int main(void)
{
    //SUBSTR
    print_title("SUBSTR");
    char sub_str[] = "Sample string";
    char *sub_str_res = ft_substr(sub_str, 9, 4);
    printf("Original string: \'%s\'\n", sub_str);
    printf("Substring: \'%s\'\n", sub_str_res);
    printf("\n\n");


    //STRJOIN
    print_title("STRJOIN");
    char tojoin[] = "Hello";
    char tojoin2[] = "World";
    printf("The strings to join: \'%s\', \'%s\'\n", tojoin, tojoin2);
    char *tojoinres = ft_strjoin(tojoin, tojoin2);
    printf("The result: \'%s\'\n", tojoinres);
    printf("\n\n");

    //STRTRIM
    print_title("STRTRIM");

    printf("\n\n");
    
    //SPLIT
    print_title("SPLIT");
    printf("\n\n");

    //ITOA
	print_title("ITOA");
    printf("the result for 2147483647 is %s\n", ft_itoa(2147483647));
    printf("the result for 0 is %s\n", ft_itoa(0));
	printf("\n\n");

    //STRMAPI
    print_title("STRMAPI");
    char *strmapi_str = "This is the original string";
    char *new_strmapi = ft_strmapi(strmapi_str, ft_i_to_a2);
    printf("Original string: \'%s\'\n", strmapi_str);
    printf("New string created with ft_strmapi: \'%s\'\n", new_strmapi);
    printf("\n\n");

    //STRITERI
	print_title("STRITERI");
	char striteri_str[] = "this is a string";
	printf("Before: \'%s\'\n", striteri_str);
	ft_striteri(striteri_str, ft_i_to_a);
	printf("After: \'%s\'\n", striteri_str);
	printf("\n\n");
    /*
    //PUTCHAR_FD
    printf("\n\n");

    //PUTSTR_FD
    printf("\n\n");

    //PUTENDL_FD
    printf("\n\n");

    //PUTNBR_FD
    printf("\n\n");
    */
    return 0;
}

