#include "Header.h"

int		ft_gl(long l)
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


char	*ft_itoa(int n)
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

#include <stdio.h>
#include <stdlib.h>
int	main(void)
{
	char	*str;

	str = ft_itoa(42);
	printf("%s\n", str); // Expected: 42
	free(str);

	str = ft_itoa(-42);
	printf("%s\n", str); // Expected: -42
	free(str);

	str = ft_itoa(0);
	printf("%s\n", str); // Expected: 0
	free(str);

	str = ft_itoa(2147483647);
	printf("%s\n", str); // Expected: 2147483647
	free(str);

	str = ft_itoa(-2147483648);
	printf("%s\n", str); // Expected: -2147483648
	free(str);

	return (0);
}

/*
DESCRIPTION:
Convert an integer into a newly allocated string.

RETURN:
A pointer to the new string.
NULL if memory allocation fails.

IMPORTANT:
Use malloc.
Handle positive numbers.
Handle negative numbers.
Handle 0.
Handle -2147483648.
Leave space for '\0'.
The returned string must be freed after use.

Think about:
1. How many characters are needed?
2. Does the number need a '-'?
3. How can you extract each digit?
4. In which direction is it easiest to fill the string?
*/

