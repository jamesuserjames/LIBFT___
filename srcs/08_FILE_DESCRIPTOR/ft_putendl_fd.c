#include "Header.h"

void	ft_putendl_fd(char const *str, int fd)
{
	int		i;
	
	i = 0;
	while (str[i])
	{
		write(fd, &str[i], 1);
		i++;
	}
	write(1, "\n", 1);
}

int	main(void)
{
	ft_putendl_fd("hello", 1); // Expected: hello + newline
	return (0);
}

/*
DESCRIPTION:
Write a string to the given file descriptor followed by a newline.

RETURN:
Nothing.

IMPORTANT:
Use the given fd for both the string and the newline.
*/
