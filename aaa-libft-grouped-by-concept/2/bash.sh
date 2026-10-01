#!/bin/bash

cat > ft_strlen.c <<'EOF'
#include "Header.h"

int	ft_strlen(char *str)
{

}

#include <stdio.h>
int	main(void)
{
	printf("%d\n", ft_strlen("hello")); // Expected: 5
	printf("%d\n", ft_strlen(""));      // Expected: 0
	return (0);
}

/*
DESCRIPTION:
Count the number of characters in a string before '\0'.

RETURN:
The length of the string.
*/
EOF

cat > ft_strcmp.c <<'EOF'
#include "Header.h"

int	ft_strcmp(char *s1, char *s2)
{

}

#include <stdio.h>
int	main(void)
{
	printf("%d\n", ft_strcmp("abc", "abc")); // Expected: 0
	printf("%d\n", ft_strcmp("abc", "abd")); // Expected: negative
	printf("%d\n", ft_strcmp("abd", "abc")); // Expected: positive
	return (0);
}

/*
DESCRIPTION:
Compare two strings until a difference is found or a string ends.

RETURN:
0 if the strings are equal.
Negative if s1 is smaller than s2.
Positive if s1 is greater than s2.
*/
EOF

cat > ft_strncmp.c <<'EOF'
#include "Header.h"

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{

}

#include <stdio.h>
int	main(void)
{
	printf("%d\n", ft_strncmp("abc", "abd", 2)); // Expected: 0
	printf("%d\n", ft_strncmp("abc", "abd", 3)); // Expected: negative
	printf("%d\n", ft_strncmp("abc", "abd", 0)); // Expected: 0
	return (0);
}

/*
DESCRIPTION:
Compare at most n characters of two strings.

RETURN:
0 if equal within n characters.
Negative if s1 is smaller than s2.
Positive if s1 is greater than s2.
*/
EOF

cat > ft_strequ.c <<'EOF'
#include "Header.h"

int	ft_strequ(char const *s1, char const *s2)
{

}

#include <stdio.h>
int	main(void)
{
	printf("%d\n", ft_strequ("hello", "hello")); // Expected: 1
	printf("%d\n", ft_strequ("hello", "world")); // Expected: 0
	return (0);
}

/*
DESCRIPTION:
Check if two strings are equal.

RETURN:
1 if the strings are equal.
0 if they are different.
*/
EOF

cat > ft_strnequ.c <<'EOF'
#include "Header.h"

int	ft_strnequ(char const *s1, char const *s2, size_t n)
{

}

#include <stdio.h>
int	main(void)
{
	printf("%d\n", ft_strnequ("abc", "abd", 2)); // Expected: 1
	printf("%d\n", ft_strnequ("abc", "abd", 3)); // Expected: 0
	printf("%d\n", ft_strnequ("abc", "xyz", 0)); // Expected: 1
	return (0);
}

/*
DESCRIPTION:
Check if two strings are equal for at most n characters.

RETURN:
1 if equal within n characters.
0 if they are different.
*/
EOF

cat > ft_strchr.c <<'EOF'
#include "Header.h"

char	*ft_strchr(const char *str, int c)
{

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
EOF

cat > ft_strrchr.c <<'EOF'
#include "Header.h"

char	*ft_strrchr(const char *str, int c)
{

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
EOF

cat > ft_strstr.c <<'EOF'
#include "Header.h"

char	*ft_strstr(const char *haystack, const char *needle)
{

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
EOF

cat > ft_strnstr.c <<'EOF'
#include "Header.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{

}

#include <stdio.h>
int	main(void)
{
	printf("%s\n", ft_strnstr("hello world", "world", 11)); // Expected: world
	printf("%s\n", ft_strnstr("abcdef", "cde", 5));         // Expected: cdef
	printf("%p\n", (void *)ft_strnstr("abcdef", "def", 3)); // Expected: NULL
	return (0);
}

/*
DESCRIPTION:
Search for the first occurrence of needle inside haystack,
but search only within the first len characters.

RETURN:
Pointer to the beginning of needle inside haystack.
NULL if needle is not found within len characters.
If needle is empty, return haystack.

IMPORTANT:
Do not search beyond len.
*/
EOF

echo "Created:"
echo "ft_strlen.c"
echo "ft_strcmp.c"
echo "ft_strncmp.c"
echo "ft_strequ.c"
echo "ft_strnequ.c"
echo "ft_strchr.c"
echo "ft_strrchr.c"
echo "ft_strstr.c"
echo "ft_strnstr.c"