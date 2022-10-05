/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <string.h>

char	*ft_strrchr(const char *str, int c)
{
	int		i;
	char	*rt;

	rt = 0;
	i = 0;
	while (str[i])
	{
		if (str[i] == (unsigned char) c)
		{
			rt = (char *)&str[i];
		}
		i++;
	}
	return (rt);
}


char	*ft_strrchr2(const char *s, int c)
{
	char	*ret;

	ret = 0;
	while (*s)
	{
		if (*s == (unsigned char)c)
			ret = (char *)s;
		++s;
	}
	if (!c)
		ret = ((char *)s);
	return (ret);
}
int main()
{
    char *str = "deneme123";
    char find = 'e';
    
    printf("%s\n", str);
    printf("----------------------\n");
    printf("%s\n",ft_strrchr2(str,find));
    printf("----------------------\n");
    printf("%s\n",ft_strrchr(str,find));
    printf("----------------------\n");
    printf("%s\n",strrchr(str,find));
  
    return 0;
}

