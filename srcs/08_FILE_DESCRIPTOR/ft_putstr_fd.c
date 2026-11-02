#include "Header.h"

void	ft_putstr_fd(char const *str, int fd)
{
	int		i;
	
	i = 0;
	while (str[i])
	{
		write(fd, &str[i], 1);
		i++;
	}
}

int	main(void)
{
	ft_putstr_fd("hello\n", 1); // Expected: hello
	return (0);
}

/*
DESCRIPTION:
Write a string to the given file descriptor.

RETURN:
Nothing.

IMPORTANT:
Write every character until '\0'.
Use fd instead of always writing to standard output.
*/
