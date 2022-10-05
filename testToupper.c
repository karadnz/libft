

#include <stdio.h>
int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		c -= 32;
	}
	return (c);
}

int main()
{
    
    printf("%c\n%c\n%c\n%c\n%c\n",ft_toupper('a'),ft_toupper('z'),ft_toupper('A'),ft_toupper('Z'),ft_toupper('@'));

    return 0;
}
