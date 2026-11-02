#include "Header.h"

char	*ft_strchr(const char *str, int c)
{
	int		i;
	
	i = 0;
	while (str[i])
	{
		if (str[i] == c)
			return ((char *)&str[i]);
		i++;
	}
	if (str[i] == c)
		return ((char *)&str[i]);
	return (NULL);
}

#include <stdio.h>
int	main(void)
{
	printf("%s\n", ft_strchr("abcdef", 'd')); // Expected: def
	printf("%s\n", ft_strchr("abcdef", 'a')); // Expected: abcdef
	return (0);
}

/*
DESCRIPTION:
Find the first occurrence of c in a string.

RETURN:
Pointer to the first occurrence of c.
NULL if c is not found.

IMPORTANT:
The terminating '\0' can also be searched for.
*/
