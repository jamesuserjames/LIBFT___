#!/bin/bash

cat > ft_striter.c <<'EOF'
#include "Header.h"

void	ft_striter(char *s, void (*f)(char *))
{

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
EOF

cat > ft_striteri.c <<'EOF'
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
EOF

cat > ft_strmap.c <<'EOF'
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
EOF

cat > ft_strmapi.c <<'EOF'
#include "Header.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{

}

static char	ft_change(unsigned int i, char c)
{
	if (i % 2 == 0 && c >= 'a' && c <= 'z')
		return (c - 32);
	return (c);
}

#include <stdio.h>
#include <stdlib.h>
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
EOF

echo "Created:"
echo "ft_striter.c"
echo "ft_striteri.c"
echo "ft_strmap.c"
echo "ft_strmapi.c"