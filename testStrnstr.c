#include <stdio.h>
#include <string.h>

size_t	ft_strlen(const char *s)
{
	size_t	ret;

	ret = 0;
	while (*s++)
		++ret;
	return (ret);
}

char	*ft_strnstr(const char *str, const char *to_find, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (!to_find[j])
		return ((char *)str);
	while (str[i] && i < len)
	{
		while ((str[i + j] == to_find[j]) && i + j < len)
		{
			j++;
			if (!to_find[j])
				return ((char *)&str[i]);
		}
		j = 0;
		i++;
	}
	return (0);
}

char	*ft_strnstr2(const char *haystack, const char *needle, size_t len)
{
	char	*haystack_tmp;
	char	*needle_tmp;
	size_t	i;

	if (!ft_strlen(needle))
		return ((char *)haystack);
	if (!ft_strlen(haystack) || len < ft_strlen(needle))
		return (0);
	i = len - ft_strlen(needle) + 1;
	while (i-- && *haystack)
	{
		haystack_tmp = (char *)haystack;
		needle_tmp = (char *)needle;
		while (*needle_tmp && *needle_tmp == *haystack_tmp)
		{
			++haystack_tmp;
			++needle_tmp;
		}
		if (!*needle_tmp)
			return ((char *)haystack);
		++haystack;
	}
	return (0);
}


int main()
{
    char str[] = "deneme";
    char find[]  = "";
    int  n     = 2;
    
    
    printf("str:%s find:%s n:%d\n", str,find,n);
    printf("----------------------\n");
    printf("%s\n",ft_strnstr(str,find,n));
    printf("----------------------\n");
    printf("%s\n",ft_strnstr2(str,find,n));
    printf("----------------------\n");
    //printf("%s\n",strnstr(str,find,n));

    return 0;
}
