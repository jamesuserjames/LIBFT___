#include "Header.h"

int	ft_isalpha(int c)
{
	return ((c >= 'a' && c <= 'z')
		|| (c >= 'A' && c <= 'Z'));
}

#include <stdio.h>
int	main(void)
{
	printf("%d\n", ft_isalpha('A')); // Expected: non-zero
	printf("%d\n", ft_isalpha('z')); // Expected: non-zero
	printf("%d\n", ft_isalpha('5')); // Expected: 0
	return (0);
}

/*
DESCRIPTION:
Check if c is an alphabetic character from A-Z or a-z.

RETURN:
Non-zero if c is a letter.
0 if c is not a letter.
*/
