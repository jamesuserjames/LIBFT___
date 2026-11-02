#include "Header.h"

int	ft_isdigit(int c)
{
	return (c >= '0' && c <= '9');
}

#include <stdio.h>
int	main(void)
{
	printf("%d\n", ft_isdigit('5')); // Expected: non-zero
	printf("%d\n", ft_isdigit('a')); // Expected: 0
	return (0);
}

/*
DESCRIPTION:
Check if c is a digit from '0' to '9'.

RETURN:
Non-zero if c is a digit.
0 if c is not a digit.
*/
