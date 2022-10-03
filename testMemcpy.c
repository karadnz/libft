#include "libft.h"
#include <stdio.h>

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t	index;

	index = 0;
	while (index < n)
	{
		*((char *)dst + index) = *((char *)src + index);
		index++;
	}
	return (dst);
}

int	main()
{
	char d[] = "12345";
	char s[] = "abc";
	printf("%s\n%s\n%s\n%s\n",d,s,(char *)ft_memcpy(d,s,3),s);
	return 0;
}
