#include <stdio.h>
#include <string.h>

char	*ft_strchr(const char *str, int c)
{
	int		i;
	char	*rt;

	rt = 0;
	i = 0;
	while (str[i])
	{
		if (str[i] == c)
		{
			rt = (char *)&str[i];
			return (rt);
		}
		i++;
	}
	return (rt);
}

char	*ft_strchr2(const char *s, int c)
{
	while (*s != (unsigned char)c)
		if (!*s++)
			return (0);
	return ((char *)s);
}

int main()
{
    char *str = "deneme123";
    char find = '3';
    printf("%s\n",ft_strchr2(str,find));
    printf("----------------------\n");
    printf("%s\n",ft_strchr(str,find));
    printf("----------------------\n");
    printf("%s\n",strchr(str,find));
  
    return 0;
}
