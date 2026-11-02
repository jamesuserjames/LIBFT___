#include "Header.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*str;

	i = 0;
	str = malloc(len + 1);
	if (!str)
		return (NULL);
	while (i < len)
	{
		str[i] = s[start + i];
		i++;
	}
	str[i] = '\0';
	return (str);
}

#include <stdio.h>
#include <stdlib.h>
int	main(void)
{
	char	*str;

	str = ft_strsub("Hello World", 6, 5);
	if (!str)
		return (1);
	printf("%s\n", str); // Expected: World
	free(str);

	str = ft_strsub("abcdef", 2, 3);
	if (!str)
		return (1);
	printf("%s\n", str); // Expected: cde
	free(str);

	return (0);
}

/*
DESCRIPTION:
Create a new string containing len characters from s,
starting at index start.

RETURN:
Pointer to the newly allocated substring.
NULL if allocation fails.

IMPORTANT:
Use malloc.
Allocate len + 1 bytes.
Start copying from s[start].
Copy len characters.
Add '\0' at the end.

Example:

"Hello World"
 01234567890

start = 6
len = 5

Result:
"World"
*/
