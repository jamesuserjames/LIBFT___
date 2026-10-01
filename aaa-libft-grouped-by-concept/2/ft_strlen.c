#include "Header.h"

int	ft_strlen(char *str)
{
	int		i;
	
	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

#include <stdio.h>
int	main(void)
{
	printf("%d\n", ft_strlen("hello")); // Expected: 5
	printf("%d\n", ft_strlen(""));      // Expected: 0
	return (0);
}

/*
DESCRIPTION:
Count the number of characters in a string before '\0'.

RETURN:
The length of the string.
*/


