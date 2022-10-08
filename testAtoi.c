
#include <stdlib.h>
#include <stdio.h>


int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	return (0);
}

static int ft_isspace(int c)
{
	unsigned char ch;

	ch = c;
	if (ch == '\f' || ch == '\n' || ch == ' ')
		return (1);
	if (ch == '\v' || ch == '\t' || ch == '\r')
		return (1);
	return (0);
}

int	ft_atoi(const char *str)
{
	int rt;
	int	sign;
	int	i;
	
	i = 0;
	rt = 0;
	sign = 1;

	while (ft_isspace(str[i]))
		i++;
	if(str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			sign = -1;
		i++;
	}
	while (ft_isdigit(str[i]))
	{
		rt = (rt * 10) + (str[i] - '0');
		i++;
	}
	return (rt * sign);
}

int main ()
{
    char *ato ="    223";
    printf("%d\n",ft_atoi(ato));
    printf("-------------------------\n");
    printf("%d\n",atoi(ato));
}