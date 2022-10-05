#include <stdio.h>


int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		c += 32;
	}
	return (c);
}



int main()
{

    printf("%c\n%c\n%c\n%c\n%c\n",ft_tolower('a'),ft_tolower('z'),ft_tolower('A'),ft_tolower('Z'),ft_tolower('@'));

    return 0;
}
