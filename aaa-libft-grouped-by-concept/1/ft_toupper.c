#include "Header.h"

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		return (c - 32);
	return (c);
}

#include <stdio.h>
int	main(void)
{
	printf("%c\n", ft_toupper('a')); // Expected: A
	printf("%c\n", ft_toupper('Z')); // Expected: Z
	printf("%c\n", ft_toupper('5')); // Expected: 5
	return (0);
}

/*
DESCRIPTION:
Convert a lowercase letter a-z to uppercase.
If c is not lowercase, return it unchanged.

RETURN:
The uppercase version of c if needed.
Otherwise return c unchanged.
*/
