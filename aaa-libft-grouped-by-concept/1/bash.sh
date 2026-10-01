#!/bin/bash

cat > ft_isdigit.c <<'EOF'
#include "Header.h"

int	ft_isdigit(int c)
{

}

#include <stdio.h>
int	main(void)
{
	printf("%d\n", ft_isdigit('5')); // Expected: non-zero
	printf("%d\n", ft_isdigit('a')); // Expected: 0
	return (0);
}

/*
DESCRIPTION:
Check if c is a digit from '0' to '9'.

RETURN:
Non-zero if c is a digit.
0 if c is not a digit.
*/
EOF

cat > ft_isalpha.c <<'EOF'
#include "Header.h"

int	ft_isalpha(int c)
{

}

#include <stdio.h>
int	main(void)
{
	printf("%d\n", ft_isalpha('A')); // Expected: non-zero
	printf("%d\n", ft_isalpha('z')); // Expected: non-zero
	printf("%d\n", ft_isalpha('5')); // Expected: 0
	return (0);
}

/*
DESCRIPTION:
Check if c is an alphabetic character from A-Z or a-z.

RETURN:
Non-zero if c is a letter.
0 if c is not a letter.
*/
EOF

cat > ft_isalnum.c <<'EOF'
#include "Header.h"

int	ft_isalnum(int c)
{

}

#include <stdio.h>
int	main(void)
{
	printf("%d\n", ft_isalnum('A')); // Expected: non-zero
	printf("%d\n", ft_isalnum('5')); // Expected: non-zero
	printf("%d\n", ft_isalnum('@')); // Expected: 0
	return (0);
}

/*
DESCRIPTION:
Check if c is a letter or digit.

RETURN:
Non-zero if c is alphanumeric.
0 otherwise.
*/
EOF

cat > ft_isascii.c <<'EOF'
#include "Header.h"

int	ft_isascii(int c)
{

}

#include <stdio.h>
int	main(void)
{
	printf("%d\n", ft_isascii(65));  // Expected: non-zero
	printf("%d\n", ft_isascii(127)); // Expected: non-zero
	printf("%d\n", ft_isascii(128)); // Expected: 0
	return (0);
}

/*
DESCRIPTION:
Check if c is inside the ASCII range.

RETURN:
Non-zero if c is between 0 and 127.
0 otherwise.
*/
EOF

cat > ft_isprint.c <<'EOF'
#include "Header.h"

int	ft_isprint(int c)
{

}

#include <stdio.h>
int	main(void)
{
	printf("%d\n", ft_isprint('A'));  // Expected: non-zero
	printf("%d\n", ft_isprint(' '));  // Expected: non-zero
	printf("%d\n", ft_isprint('\n')); // Expected: 0
	return (0);
}

/*
DESCRIPTION:
Check if c is a printable ASCII character.

RETURN:
Non-zero if c is printable.
0 otherwise.
*/
EOF

cat > ft_tolower.c <<'EOF'
#include "Header.h"

int	ft_tolower(int c)
{

}

#include <stdio.h>
int	main(void)
{
	printf("%c\n", ft_tolower('A')); // Expected: a
	printf("%c\n", ft_tolower('z')); // Expected: z
	printf("%c\n", ft_tolower('5')); // Expected: 5
	return (0);
}

/*
DESCRIPTION:
Convert an uppercase letter A-Z to lowercase.
If c is not uppercase, return it unchanged.

RETURN:
The lowercase version of c if needed.
Otherwise return c unchanged.
*/
EOF

cat > ft_toupper.c <<'EOF'
#include "Header.h"

int	ft_toupper(int c)
{

}

#include <stdio.h>
int	main(void)
{
	printf("%c\n", ft_toupper('a')); // Expected: A
	printf("%c\n", ft_toupper('Z')); // Expected: Z
	printf("%c\n", ft_toupper('5')); // Expected: 5
	return (0);
}

/*
DESCRIPTION:
Convert a lowercase letter a-z to uppercase.
If c is not lowercase, return it unchanged.

RETURN:
The uppercase version of c if needed.
Otherwise return c unchanged.
*/
EOF

echo "Created:"
echo "ft_isdigit.c"
echo "ft_isalpha.c"
echo "ft_isalnum.c"
echo "ft_isascii.c"
echo "ft_isprint.c"
echo "ft_tolower.c"
echo "ft_toupper.c"