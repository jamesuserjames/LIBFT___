#include "Header.h"

char	*ft_strstr(const char *str, const char *needle)
{
	int		i;
	int		j;
	i = 0;
	while (str[i])
	{
		j = 0;
		while (needle[j] == str[i + j])
		{
			if (needle[j + 1] == '\0')
				return ((char *)&str[i]);
			j++;
		}
		i++;
	}
	if (needle[0] == '\0')
		return ((char *)str);
	return (NULL);
}

#include <stdio.h>
int	main(void)
{
	printf("%s\n", ft_strstr("hello world", "world")); // Expected: world
	printf("%s\n", ft_strstr("abcdef", "cde"));        // Expected: cdef
	printf("%s\n", ft_strstr("abcdef", ""));           // Expected: abcdef
	return (0);
}

/*
DESCRIPTION:
Search for the first occurrence of the string needle
inside the string haystack.

RETURN:
Pointer to the beginning of needle inside haystack.
NULL if needle is not found.
If needle is empty, return haystack.
*/
