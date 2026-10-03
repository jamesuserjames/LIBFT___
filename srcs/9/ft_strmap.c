#include "Header.h"

char	*ft_strmap(char const *s, char (*f)(char))
{

}

static char	ft_upper(char c)
{
	if (c >= 'a' && c <= 'z')
		return (c - 32);
	return (c);
}

#include <stdio.h>
#include <stdlib.h>
int	main(void)
{
	char	*str;

	str = ft_strmap("hello", ft_upper);
	if (!str)
		return (1);

	printf("%s\n", str); // Expected: HELLO

	free(str);
	return (0);
}

/*
DESCRIPTION:
Apply function f to every character of s and use
the returned characters to create a NEW string.

RETURN:
Pointer to the newly allocated string.
NULL if allocation fails.

IMPORTANT:
Unlike ft_striter, do not modify the original string.

f receives a character and RETURNS a character.

Example:

Original:
"abc"

f('a') -> 'A'
f('b') -> 'B'
f('c') -> 'C'

New string:
"ABC"

You need to:
1. Find the length of s.
2. Allocate a new string.
3. Call f for every character.
4. Store each returned character.
5. Add '\0'.
*/
