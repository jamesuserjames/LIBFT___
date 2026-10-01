#include "Header.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{

}

static void	ft_change(unsigned int i, char *c)
{
	if (i % 2 == 0 && *c >= 'a' && *c <= 'z')
		*c = *c - 32;
}

#include <stdio.h>
int	main(void)
{
	char	str[] = "abcdef";

	ft_striteri(str, ft_change);
	printf("%s\n", str); // Expected: AbCdEf
	return (0);
}

/*
DESCRIPTION:
Apply function f to every character of string s.

Unlike ft_striter, f also receives the index
of the current character.

RETURN:
Nothing.

IMPORTANT:
f receives two arguments:

1. The index.
2. The address of the character.

Example:

s = "abc"

f(0, &s[0])
f(1, &s[1])
f(2, &s[2])

Because f receives char *, it can modify the original string.
*/
