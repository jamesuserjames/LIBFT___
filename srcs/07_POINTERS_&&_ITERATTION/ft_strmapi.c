#include "Header.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*str;

	i = 0;
	if (!s || !f || !((str = (char *)malloc(sizeof(char) * (ft_strlen(s)) + 1))))
		return (NULL);
	while (s[i])
	{
		str[i] = f(i, s[i]);
		i++;
	}
	str[i] = '\0';
	return (str);
}

static char	ft_change(unsigned int i, char c)
{
	if (i % 2 == 0 && c >= 'a' && c <= 'z')
		return (c - 32);
	return (c);
}

int	main(void)
{
	char	*str;

	str = ft_strmapi("abcdef", ft_change);
	if (!str)
		return (1);

	printf("%s\n", str); // Expected: AbCdEf

	free(str);
	return (0);
}

/*
DESCRIPTION:
Apply function f to every character of s and use
the returned characters to create a NEW string.

Unlike ft_strmap, f also receives the index.

RETURN:
Pointer to the newly allocated string.
NULL if allocation fails.

IMPORTANT:
f receives:

1. The index.
2. The character.

f returns the character that should be stored
in the new string.

Example:

s = "abc"

f(0, 'a') -> 'A'
f(1, 'b') -> 'b'
f(2, 'c') -> 'C'

New string:
"AbC"

You need to:
1. Find the length of s.
2. Allocate a new string.
3. Call f with the index and character.
4. Store the returned character.
5. Add '\0'.
*/
