#ifndef	LIBFT_H
# define LIBFT_H

# include <stdlib.h>
# include <unistd.h>
#include <stddef.h>
#include <stdio.h>

int	ft_atoi(const char *str);
int	ft_isalnum(int a);
int	ft_isalpha(int a);
int	ft_isascii(int a);
int	ft_isdigit(int a);
int	ft_isprint(int c);
int	ft_memcmp(const void *pont1, const void *pont2, size_t cmp);
int	ft_strncmp(const char *str1, const char *str2, size_t size);
int	ft_tolower(int c);
int	ft_toupper(int c);

void	bzero(void *s, size_t n);
void	*ft_memchr(const void *pont, int ch, size_t size);
void	*ft_memcpy(void *dest, const void *src, size_t n);
void	*ft_memmove(void *dest, const void *src, size_t count);
void	*ft_memset(void *a, int c, size_t len);
void	*ft_malloc(size_t num, size_t size);

char	*ft_strchr(const char *str, int c);
char	*ft_strdup(const char *src);
char	*ft_strnstr(const char *src, const char *find, size_t size);
char	*ft_strrchr(const char *str, int c);

size_t	ft_strlcat(char *dest, const char *src, size_t size);
size_t	ft_strlcpy(char *dest, const char *src, size_t count);
size_t	ft_strlen(const char *str);

#endif