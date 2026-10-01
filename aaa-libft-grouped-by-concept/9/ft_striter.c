#include "Header.h"

void	ft_striter(char *s, void (*f)(char *))
{
	char			*str;
	unsigned int	counter;

	str = (char *)s;
	if (str && f)
	{
		counter = 0;
		while (str[counter])
		{
			(*f)(&str[counter]);
			counter++;
		}
	}
}
static void	ft_upper(char *c)
{
	if (*c >= 'a' && *c <= 'z')
		*c = *c - 32;
}

#include <stdio.h>
int	main(void)
{
	char	str[] = "hello";

	ft_striter(str, ft_upper);
	printf("%s\n", str); // Expected: HELLO
	return (0);
}

/*
DESCRIPTION:
Apply function f to every character of string s.

RETURN:
Nothing.

IMPORTANT:
f is a function pointer.

f receives the ADDRESS of each character.

Example:

s = "abc"

f(&s[0])
f(&s[1])
f(&s[2])

Because f receives char *, it can modify the original string.
*/
