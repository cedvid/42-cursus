#ifndef LIBFT.H
# define LIBFT.H

#include <stdlib.h>

int	ft_isalpha(int c);
int	ft_isdigit(int c);
int	ft_strlen(const char *s);
int	ft_isalnum(int c);
int	ft_isascii(int c);
int	ft_isprint(int c);
unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size);
int	ft_toupper(int c);
int	ft_tolower(int c);
int	ft_atoi(char *str);
char	*ft_strchr(const char *s, int c);
char	*ft_strrchr(const char *s, int c);
int	*ft_strncmp(const char *s1, const char *s2, int n);
void	*ft_memset(void *s, int c, int n);
void	ft_bzero(void *s, int n);
void    *ft_memcpy(void *dest, const void *src, size_t n)


#endif
