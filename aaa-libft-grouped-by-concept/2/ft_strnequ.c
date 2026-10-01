#include "Header.h"

int	ft_strnequ(char const *s1, char const *s2, size_t n)
{
	size_t		i;
	
	i = 0;
	while ((s1[i] || s2[i]) && i < n)
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
	printf("%d\n", ft_strnequ("abc", "abd", 2)); // Expected: 1
	printf("%d\n", ft_strnequ("abc", "abd", 3)); // Expected: 0
	printf("%d\n", ft_strnequ("abc", "xyz", 0)); // Expected: 1
	return (0);
}

/*
DESCRIPTION:
Check if two strings are equal for at most n characters.

RETURN:
1 if equal within n characters.
0 if they are different.
*/
