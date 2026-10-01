#include "Header.h"

int	ft_strequ(char const *s1, char const *s2)
{
	int		i;
	
	i = 0;
	while (s1[i] || s2[i])
	{
		if (s1[i] != s2[i])
			return (0);
		i++;
	}
	return (1);
}

#include <stdio.h>
int	main(void)
{
	printf("%d\n", ft_strequ("hello", "hello")); // Expected: 1
	printf("%d\n", ft_strequ("hello", "world")); // Expected: 0
	return (0);
}

/*
DESCRIPTION:
Check if two strings are equal.

RETURN:
1 if the strings are equal.
0 if they are different.
*/
