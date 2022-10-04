#include <stdio.h>
#include <string.h>


size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;

	i = 0;
	while (src[i] && (i < (size - 1)))
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	i = 0;
	while (src[i])
		i++;
	return (i);
}

int main() {
  char dest[]="123456";
  char src[]="abc";
  size_t size = 4;

  printf("%s\n%s\n%d\n%s\n%s\n",dest,src,(int)ft_strlcpy(dest,src,size),dest,src);

  printf("----------------------------\n");
  
  char odest[]="123456";
  char osrc[]="abc";
  
  printf("%s\n%s\n%d\n%s\n%s\n",odest,osrc,(int)strlcpy(odest,osrc,size),odest,osrc);
  
  

  return 0;
}
