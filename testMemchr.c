#include <stdio.h>
#include <string.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;
	void	*rt;

	i = 0;
	rt = 0;
	while (i < n)
	{
		if (*((unsigned char *)s+i) == (unsigned char)c)
		{
			rt = (void *)s + i;
			return (rt);
		}
		i++;
	}
	return (rt);
}

void	*ft_memchr2(const void *s, int c, size_t n)
{
	while (n--)
	{
		if (*(unsigned char *)s == (unsigned char)c)
			return ((void *)s);
		++s;
	}
	return (0);
}

int main()
{
    unsigned char *str = "deneme123";
    char find = 'e';
    int n = 9;
    
    printf("%s\n", str);
    printf("----------------------\n");
    printf("%s\n",(char *)ft_memchr(str,find,5));
    printf("----------------------\n");
    printf("%s\n",(char *)ft_memchr2(str,find,5));
    printf("----------------------\n");
    printf("%s\n",(char *)memchr(str,find,5));
  
    return 0;
}
