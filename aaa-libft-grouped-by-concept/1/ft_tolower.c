#include "Header.h"

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (c + 32);
	return (c);
}

#include <stdio.h>
int	main(void)
{
	printf("%c\n", ft_tolower('A')); // Expected: a
	printf("%c\n", ft_tolower('z')); // Expected: z
	printf("%c\n", ft_tolower('5')); // Expected: 5
	return (0);
}

/*
DESCRIPTION:
Convert an uppercase letter A-Z to lowercase.
If c is not uppercase, return it unchanged.

RETURN:
The lowercase version of c if needed.
Otherwise return c unchanged.
*/
