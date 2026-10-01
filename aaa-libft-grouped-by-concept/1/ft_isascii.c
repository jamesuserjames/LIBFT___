#include "Header.h"

int	ft_isascii(int c)
{
	return (c >= 0 && c <= 127);
}

#include <stdio.h>
int	main(void)
{
	printf("%d\n", ft_isascii(65));  // Expected: non-zero
	printf("%d\n", ft_isascii(127)); // Expected: non-zero
	printf("%d\n", ft_isascii(128)); // Expected: 0
	return (0);
}

/*
DESCRIPTION:
Check if c is inside the ASCII range.

RETURN:
Non-zero if c is between 0 and 127.
0 otherwise.
*/
