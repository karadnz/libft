#include <stdio.h>
#include <stdlib.h>


size_t	ft_strlen(const char *str)
{
	size_t i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*rt;
	size_t	i;

	i = 0;
	rt = (char *)malloc(len + 1);
	if (!s || !rt)
		return (0);
	while (i < ft_strlen(s) && i < len)
		rt[i++] = s[start++];
	rt[i] = '\0';
	return (rt);
}



int main()
{
    char *src = "12345678";
    
    printf("%s\n",ft_substr(src,5,3));
    printf("---------------");

    return 0;
}
