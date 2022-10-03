#include <stdio.h>


void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*str;
	size_t			i;

	i = 0;
	str = (unsigned char *) b;
	while (i < len)
	{
		str[i] = c;
		i++;
	}
	return (b);
}

int	main()
{
	char d[] = "12345";
	printf("%s\n",d);
	printf("%s",(char *)ft_memset(d,'$',6));
	return (0);
}
