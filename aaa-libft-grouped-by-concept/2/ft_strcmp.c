#include "Header.h"

int	ft_strcmp(char *s1, char *s2)
{
	int		i;
	
	i = 0;
	while (s1[i] && s2[i])
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (s1[i] - s2[i]);
}

#include <stdio.h>
int	main(void)
{
	printf("%d\n", ft_strcmp("abc", "abc")); // Expected: 0
	printf("%d\n", ft_strcmp("abc", "abd")); // Expected: negative
	printf("%d\n", ft_strcmp("abd", "abc")); // Expected: positive
	return (0);
}

/*
DESCRIPTION:
Compare two strings until a difference is found or a string ends.

RETURN:
0 if the strings are equal.
Negative if s1 is smaller than s2.
Positive if s1 is greater than s2.
*/
