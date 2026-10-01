#include "Header.h"

void	ft_putstr(char const *str)
{
	int		i;
	
	i = 0;
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
}

int	main(void)
{
	ft_putstr("hello\n"); // Expected: hello
	return (0);
}

/*
DESCRIPTION:
Write a string to standard output.

RETURN:
Nothing.

IMPORTANT:
Write every character until '\0'.
*/
