#include <stdio.h>
#include "libft.h"

void	ft_bzero(void *str, size_t n)
{
	ft_memset(str, '\0', n);
}

int main()
{
	char d[] = "12345";
	printf("%s", d);
	ft_bzero(d,2);
	printf("%s",d);

	return 0;
}

