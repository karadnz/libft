#include <stdio.h>
#include <string.h>
#include "libft.h"


size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	dlen;

	i = 0;
	if (dstsize <= ft_strlen(dst))
		return (dstsize + ft_strlen(src));
	dlen = ft_strlen(dst);
	i = 0;
	while (src[i] && dlen + 1 < dstsize)
	{
		dst[dlen] = src[i];
		i++;
		dlen++;
	}
	dst[dlen] = '\0';
	return (ft_strlen(dst) + ft_strlen(&src[i]));
}

int main() {
  char dest[]="12345";
  char src[]="abc";
  size_t size = 10;

  printf("%s\n%s\nreturn: %d\n%s\n%s\n",dest,src,(int)ft_strlcat(dest,src,size),dest,src);

  printf("-----------------------------------------------\n");
  
  char odest[]="12345";
  char osrc[]="abc";
  
  printf("%s\n%s\nreturn: %d\n%s\n%s\n",odest,osrc,(int)strlcat(odest,osrc,size),odest,osrc);
  
  

  return 0;
}
