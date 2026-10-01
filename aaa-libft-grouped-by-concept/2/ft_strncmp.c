#include "Header.h"

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int		i;
	
	i = 0;
	while ((s1[i] || s2[i]) && i < n)
	{
		if (s1[i] != s2[i])
			return ((unsigned char)s1[i] - (unsigned char)s2[i]);
		i++;
	}
	return (0);
}

#include <stdio.h>
int	main(void)
{
	printf("%d\n", ft_strncmp("abc", "abd", 2)); // Expected: 0
	printf("%d\n", ft_strncmp("abc", "abd", 3)); // Expected: negative
	printf("%d\n", ft_strncmp("abc", "abd", 0)); // Expected: 0
	return (0);
}

/*
DESCRIPTION:
Compare at most n characters of two strings.

RETURN:
0 if equal within n characters.
Negative if s1 is smaller than s2.
Positive if s1 is greater than s2.
*/
