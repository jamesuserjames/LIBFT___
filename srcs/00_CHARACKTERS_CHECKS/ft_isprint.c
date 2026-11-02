#include "Header.h"

int	ft_isprint(int c)
{
	return (c >= 32 && c <= 126);
}

#include <stdio.h>
int	main(void)
{
	printf("%d\n", ft_isprint('A'));  // Expected: non-zero
	printf("%d\n", ft_isprint(' '));  // Expected: non-zero
	printf("%d\n", ft_isprint('\n')); // Expected: 0
	return (0);
}

/*
DESCRIPTION:
Check if c is a printable ASCII character.

RETURN:
Non-zero if c is printable.
0 otherwise.
*/
