#include "Header.h"

void	ft_putendl(char const *str)
{
	int		i;
	
	i = 0;
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
	write(1, "\n", 1);
}

int	main(void)
{
	ft_putendl("hello"); // Expected: hello + newline
	return (0);
}

/*
DESCRIPTION:
Write a string to standard output followed by a newline.

RETURN:
Nothing.

IMPORTANT:
Write the complete string first.
Then write '\n'.
*/
