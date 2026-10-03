#include "Header.h"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	main(void)
{
	ft_putchar('A'); // Expected: A
	ft_putchar('\n');
	return (0);
}

/*
DESCRIPTION:
Write one character to standard output.

RETURN:
Nothing.

IMPORTANT:
Standard output uses file descriptor 1.
*/
