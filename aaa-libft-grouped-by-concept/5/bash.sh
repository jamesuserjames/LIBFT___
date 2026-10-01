#!/bin/bash

cat > ft_putchar.c <<'EOF'
#include "Header.h"

void	ft_putchar(char c)
{

}

int	main(void)
{
	ft_putchar('A'); // Expected: A
	ft_putchar('\n');
	return (0);
}

/*
DESCRIPTION:
Write one character to standard output.

RETURN:
Nothing.

IMPORTANT:
Standard output uses file descriptor 1.
*/
EOF

cat > ft_putchar_fd.c <<'EOF'
#include "Header.h"

void	ft_putchar_fd(char c, int fd)
{

}

int	main(void)
{
	ft_putchar_fd('A', 1); // Expected: A
	ft_putchar_fd('\n', 1);
	return (0);
}

/*
DESCRIPTION:
Write one character to the given file descriptor.

RETURN:
Nothing.

IMPORTANT:
Use fd to decide where the character is written.
*/
EOF

cat > ft_putstr.c <<'EOF'
#include "Header.h"

void	ft_putstr(char const *str)
{

}

int	main(void)
{
	ft_putstr("hello\n"); // Expected: hello
	return (0);
}

/*
DESCRIPTION:
Write a string to standard output.

RETURN:
Nothing.

IMPORTANT:
Write every character until '\0'.
*/
EOF

cat > ft_putstr_fd.c <<'EOF'
#include "Header.h"

void	ft_putstr_fd(char const *str, int fd)
{

}

int	main(void)
{
	ft_putstr_fd("hello\n", 1); // Expected: hello
	return (0);
}

/*
DESCRIPTION:
Write a string to the given file descriptor.

RETURN:
Nothing.

IMPORTANT:
Write every character until '\0'.
Use fd instead of always writing to standard output.
*/
EOF

cat > ft_putendl.c <<'EOF'
#include "Header.h"

void	ft_putendl(char const *str)
{

}

int	main(void)
{
	ft_putendl("hello"); // Expected: hello + newline
	return (0);
}

/*
DESCRIPTION:
Write a string to standard output followed by a newline.

RETURN:
Nothing.

IMPORTANT:
Write the complete string first.
Then write '\n'.
*/
EOF

cat > ft_putendl_fd.c <<'EOF'
#include "Header.h"

void	ft_putendl_fd(char const *str, int fd)
{

}

int	main(void)
{
	ft_putendl_fd("hello", 1); // Expected: hello + newline
	return (0);
}

/*
DESCRIPTION:
Write a string to the given file descriptor followed by a newline.

RETURN:
Nothing.

IMPORTANT:
Use the given fd for both the string and the newline.
*/
EOF

cat > ft_putnbr.c <<'EOF'
#include "Header.h"

void	ft_putnbr(int n)
{

}

int	main(void)
{
	ft_putnbr(42);          // Expected: 42
	ft_putchar('\n');
	ft_putnbr(-42);         // Expected: -42
	ft_putchar('\n');
	ft_putnbr(0);           // Expected: 0
	ft_putchar('\n');
	ft_putnbr(-2147483648); // Expected: -2147483648
	ft_putchar('\n');
	return (0);
}

/*
DESCRIPTION:
Write an integer to standard output.

RETURN:
Nothing.

IMPORTANT:
Handle positive numbers.
Handle negative numbers.
Handle 0.
Handle -2147483648.
Convert each digit into a printable character.
*/
EOF

cat > ft_putnbr_fd.c <<'EOF'
#include "Header.h"

void	ft_putnbr_fd(int n, int fd)
{

}

int	main(void)
{
	ft_putnbr_fd(42, 1);          // Expected: 42
	ft_putchar_fd('\n', 1);
	ft_putnbr_fd(-42, 1);         // Expected: -42
	ft_putchar_fd('\n', 1);
	ft_putnbr_fd(0, 1);           // Expected: 0
	ft_putchar_fd('\n', 1);
	ft_putnbr_fd(-2147483648, 1); // Expected: -2147483648
	ft_putchar_fd('\n', 1);
	return (0);
}

/*
DESCRIPTION:
Write an integer to the given file descriptor.

RETURN:
Nothing.

IMPORTANT:
Handle positive numbers.
Handle negative numbers.
Handle 0.
Handle -2147483648.
Use fd for all output.
Convert each digit into a printable character.
*/
EOF

echo "Created:"
echo "ft_putchar.c"
echo "ft_putchar_fd.c"
echo "ft_putstr.c"
echo "ft_putstr_fd.c"
echo "ft_putendl.c"
echo "ft_putendl_fd.c"
echo "ft_putnbr.c"
echo "ft_putnbr_fd.c"