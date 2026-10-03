#include "Header.h"

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}

int	main(void)
{
	ft_putchar_fd('A', 1); // Expected: A
	ft_putchar_fd('\n', 1);
	return (0);
}

/*
DESCRIPTION:
Write one character to the given file descriptor.

RETURN:
Nothing.

IMPORTANT:
Use fd to decide where the character is written.
*/
