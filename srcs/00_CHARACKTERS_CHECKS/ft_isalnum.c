#include "Header.h"

int	ft_isalnum(int c)
{
	return ((c >= 'a' && c <= 'z')
		|| (c >= 'A' && c <= 'Z')
		|| (c >= '0' && c <= '9'));	
}

#include <stdio.h>
int	main(void)
{
	printf("%d\n", ft_isalnum('A')); // Expected: non-zero
	printf("%d\n", ft_isalnum('5')); // Expected: non-zero
	printf("%d\n", ft_isalnum('@')); // Expected: 0
	return (0);
}

/*
DESCRIPTION:
Check if c is a letter or digit.

RETURN:
Non-zero if c is alphanumeric.
0 otherwise.
*/
