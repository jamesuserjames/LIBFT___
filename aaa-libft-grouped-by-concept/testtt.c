#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int		ft_getlen(int l)
{
	int		i;
	
	i = 0;
	if (l == 0)
		return (1);
	if (l < 0)
	{
		i++;
		l = -l;
	}
	while (l >= 1)
	{
		l /= 10;
		i++;
	}
    return (i);
}

int main(void)
{
    printf("%d\n", ft_getlen(123));
    printf("%d\n", ft_getlen(0));
    printf("%d\n", ft_getlen(1));
    printf("%d\n", ft_getlen(-9));
    return 0;
}
