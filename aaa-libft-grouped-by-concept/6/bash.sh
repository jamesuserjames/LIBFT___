#!/bin/bash

cat > ft_atoi.c <<'EOF'
#include "Header.h"

int	ft_atoi(const char *str)
{

}

#include <stdio.h>
int	main(void)
{
	printf("%d\n", ft_atoi("42"));          // Expected: 42
	printf("%d\n", ft_atoi("-42"));         // Expected: -42
	printf("%d\n", ft_atoi("+42"));         // Expected: 42
	printf("%d\n", ft_atoi("   123"));      // Expected: 123
	printf("%d\n", ft_atoi("\t\n  -123"));  // Expected: -123
	printf("%d\n", ft_atoi("123abc"));      // Expected: 123
	printf("%d\n", ft_atoi("abc123"));      // Expected: 0
	printf("%d\n", ft_atoi("0"));           // Expected: 0
	return (0);
}

/*
DESCRIPTION:
Convert the beginning of a string into an integer.

RETURN:
The integer represented by the string.

IMPORTANT:
Skip leading whitespace.
Handle an optional '+' or '-'.
Read digits until a non-digit is found.

ASCII whitespace:
' '  = 32
'\t' = 9
'\n' = 10
'\v' = 11
'\f' = 12
'\r' = 13
*/
EOF

cat > ft_itoa.c <<'EOF'
#include "Header.h"

char	*ft_itoa(int n)
{

}

#include <stdio.h>
#include <stdlib.h>
int	main(void)
{
	char	*str;

	str = ft_itoa(42);
	printf("%s\n", str); // Expected: 42
	free(str);

	str = ft_itoa(-42);
	printf("%s\n", str); // Expected: -42
	free(str);

	str = ft_itoa(0);
	printf("%s\n", str); // Expected: 0
	free(str);

	str = ft_itoa(2147483647);
	printf("%s\n", str); // Expected: 2147483647
	free(str);

	str = ft_itoa(-2147483648);
	printf("%s\n", str); // Expected: -2147483648
	free(str);

	return (0);
}

/*
DESCRIPTION:
Convert an integer into a newly allocated string.

RETURN:
A pointer to the new string.
NULL if memory allocation fails.

IMPORTANT:
Use malloc.
Handle positive numbers.
Handle negative numbers.
Handle 0.
Handle -2147483648.
Leave space for '\0'.
The returned string must be freed after use.

Think about:
1. How many characters are needed?
2. Does the number need a '-'?
3. How can you extract each digit?
4. In which direction is it easiest to fill the string?
*/
EOF

echo "Created:"
echo "ft_atoi.c"
echo "ft_itoa.c"