#include <stdio.h>
#include <string.h>

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (s1[i] && s2[i] && i < n)
	{
		if (!(s1[i] == s2[i]))
			return (s1[i] - s2[i]);
		i++;
	}
	if (i == n)
		i--;
	return (s1[i] - s2[i]);
}

int	ft_strncmp2(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (*s1 && *s2 && i < n)
	{
		if (*s1 != *s2)
			return (*(unsigned char *)s1 - *(unsigned char *)s2);
		++s1;
		++s2;
		++i;
	}
	if (i == n)
	{
		--s1;
		--s2;
	}
	return (*(unsigned char *)s1 - *(unsigned char *)s2);
}

int main()
{
    char *s1 = "deneme12389";
    char *s2 = "denemeh-nihyh";
    int n = 10;
    printf("%d\n",ft_strncmp(s1,s2,n));
    printf("------------------\n");
    printf("%d\n",ft_strncmp2(s1,s2,n));
    printf("------------------\n");
    printf("%d\n",strncmp(s1,s2,n));
    

    return 0;
}
