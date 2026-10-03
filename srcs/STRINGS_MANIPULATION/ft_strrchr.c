#include "Header.h"

int	ft_strlen(const char *str)
{
	int		i;
	
	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

char	*ft_strrchr(const char *str, int c)
{
	int		i;
	
	i = ft_strlen(str);
	while (i >= 0)
	{
		if (str[i] == (char)c)
			return ((char *)&str[i]);
		i--;
	}
	return (NULL);
}

#include <stdio.h>
int	main(void)
{
	printf("%s\n", ft_strrchr("abcabc", 'b')); // Expected: bc
	printf("%s\n", ft_strrchr("hello", 'h'));  // Expected: hello
	return (0);
}

/*
DESCRIPTION:
Find the last occurrence of c in a string.

RETURN:
Pointer to the last occurrence of c.
NULL if c is not found.

IMPORTANT:
Unlike ft_strchr, search for the last occurrence.
The terminating '\0' can also be searched for.
*/
