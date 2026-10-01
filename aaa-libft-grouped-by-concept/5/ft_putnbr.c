#include "Header.h"

void	ft_putnbr(int n)
{
	long	l;
	char	c;

	l = (long)n;
	if (l < 0)
	{
		write(1, "-", 1);
		l = -l;
	}
	if (l >= 10)
		ft_putnbr(l / 10);
	c = (l % 10) + '0';
	write(1, &c, 1);
}

int	main(void)
{
	ft_putnbr(42);          // Expected: 42
	write(1, "\n", 1);
	ft_putnbr(-42);         // Expected: -42
	write(1, "\n", 1);
	ft_putnbr(0);           // Expected: 0
	write(1, "\n", 1);
	ft_putnbr(-2147483648); // Expected: -2147483648
	write(1, "\n", 1);
	return (0);
}

/*
DESCRIPTION:
Write an integer to standard output.

RETURN:
Nothing.

IMPORTANT:
Handle positive numbers.
Handle negative numbers.
Handle 0.
Handle -2147483648.
Convert each digit into a printable character.
*/
