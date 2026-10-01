#include "libft.h"

static int	ft_numlen(long l)
{
	int		i;
	
	i = 1;
	if (l < 0)
	{
		i++;
		l = -l;
	}
	while (l >= 10)
	{
		l /= 10;
		i++;
	}
	return (i);
}

char *ft_itoa(int n)
{
	long	l;
	int		len;
	int		negative;
	char	*str;

	l = n;
	negative = (l < 0);
	len = ft_gl(n);
	str = malloc(len + 1);
	if (!str)
		return (NULL);
	str[len] = '\0';
	len--;
	if (l < 0)
	{
		l = -l;
		str[0] = '-';
	}
	while (len >= negative)
	{
		str[len] = (l % 10) + '0';
		len--;
		l /= 10;
	}
	return (str);
}

int	main(void)
{
	char	*str;

	// Expected: 42
	str = ft_itoa(42);
	printf("%s\n", str);
	free(str);
	// Expected: 2147483647
	str = ft_itoa(2147483647);
	printf("%s\n", str);
	free(str);
	// Expected: -2147483648
	str = ft_itoa(-2147483648);
	printf("%s\n", str);
	free(str);
	return (0);
}
/*
Allocates memory (using malloc(3)) and returns
a string representing the integer received as an
argument. Negative numbers must be handled.
return value:
The string representing the integer.
NULL if the allocation fails.
*/