#include "Header.h"

int		ft_len(char const *str)
{
	int		i;
	
	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;
	int		s1l;
	int		s2l;
	int		i;
	
	i = 0;
	s1l = ft_len(s1);
	s2l = ft_len(s2);
	str = malloc((s1l + s2l) + 1);
	if (!str)
		return (NULL);
	while (i < s1l)
	{
		str[i] = s1[i];
		i++;
	}
	i = 0;
	while (i < s2l)
	{
		str[i + s1l] = s2[i];
		i++;
	}
	str[i + s1l] = '\0';
	return (str);
}

#include <stdio.h>
#include <stdlib.h>
int	main(void)
{
	char	*str;

	str = ft_strjoin("Hello ", "World");
	if (!str)
		return (1);
	printf("%s\n", str); // Expected: Hello World
	free(str);

	str = ft_strjoin("abc", "def");
	if (!str)
		return (1);
	printf("%s\n", str); // Expected: abcdef
	free(str);

	return (0);
}

/*
DESCRIPTION:
Create a new string containing s1 followed by s2.

RETURN:
Pointer to the newly allocated joined string.
NULL if allocation fails.

IMPORTANT:
Find the length of both strings.
Allocate enough memory for both strings and '\0'.
Copy s1 first.
Then copy s2.
Add '\0' at the end.

Memory needed:

length of s1
+
length of s2
+
1 for '\0'
*/
