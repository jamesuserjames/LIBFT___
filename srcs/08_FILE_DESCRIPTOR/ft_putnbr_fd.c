#include "Header.h"

void	ft_putnbr_fd(int n, int fd)
{
	long	l;
	char	c;

	l = n;
	if (l < 0)
	{
		write(fd, "-", 1);
		l = -l;
	}
	if (l >= 10)
		ft_putnbr_fd(l / 10, fd);
	c = (l % 10) + '0';
	write(fd, &c, 1);
}

int	main(void)
{
	ft_putnbr_fd(-2147483648, 1); // Expected: -2147483648
	return (0);
}

/*
DESCRIPTION:
Write an integer to the given file descriptor.

RETURN:
Nothing.

IMPORTANT:
Handle positive numbers.
Handle negative numbers.
Handle 0.
Handle -2147483648.
Use fd for all output.
Convert each digit into a printable character.
*/
