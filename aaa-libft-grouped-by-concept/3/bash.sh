#!/bin/bash

cat > ft_bzero.c <<'EOF'
#include "Header.h"

void	ft_bzero(void *s, size_t n)
{

}

#include <stdio.h>
int	main(void)
{
	char	str[] = "abcdef";

	ft_bzero(str, 3);
	printf("%d %d %d %c\n", str[0], str[1], str[2], str[3]);
	// Expected: 0 0 0 d
	return (0);
}

/*
DESCRIPTION:
Set the first n bytes of memory to zero.

RETURN:
Nothing.

IMPORTANT:
Work with raw memory, not strings.
Do not stop at '\0'.
*/
EOF

cat > ft_memset.c <<'EOF'
#include "Header.h"

void	*ft_memset(void *b, int c, size_t len)
{

}

#include <stdio.h>
int	main(void)
{
	char	str[10] = "abcdefghi";

	ft_memset(str, 'X', 5);
	printf("%s\n", str); // Expected: XXXXXfghi
	return (0);
}

/*
DESCRIPTION:
Fill the first len bytes of memory with c.

RETURN:
Return the original pointer b.

IMPORTANT:
Work with raw memory, not strings.
Do not stop at '\0'.
c should be treated as an unsigned char.
*/
EOF

cat > ft_memchr.c <<'EOF'
#include "Header.h"

void	*ft_memchr(const void *s, int c, size_t n)
{

}

#include <stdio.h>
int	main(void)
{
	char	str[] = "abcdef";

	printf("%s\n", (char *)ft_memchr(str, 'd', 6)); // Expected: def
	printf("%p\n", ft_memchr(str, 'x', 6));         // Expected: NULL
	return (0);
}

/*
DESCRIPTION:
Search the first n bytes of memory for c.

RETURN:
Pointer to the first matching byte.
NULL if c is not found.

IMPORTANT:
Search exactly within the first n bytes.
Do not stop at '\0'.
Compare bytes as unsigned char.
*/
EOF

cat > ft_memcmp.c <<'EOF'
#include "Header.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{

}

#include <stdio.h>
int	main(void)
{
	printf("%d\n", ft_memcmp("abc", "abc", 3)); // Expected: 0
	printf("%d\n", ft_memcmp("abc", "abd", 3)); // Expected: negative
	printf("%d\n", ft_memcmp("abd", "abc", 3)); // Expected: positive
	return (0);
}

/*
DESCRIPTION:
Compare the first n bytes of two memory areas.

RETURN:
0 if the first n bytes are equal.
Negative if the first different byte in s1 is smaller.
Positive if the first different byte in s1 is greater.

IMPORTANT:
Work with raw memory, not strings.
Do not stop at '\0'.
Compare bytes as unsigned char.
*/
EOF

cat > ft_memcpy.c <<'EOF'
#include "Header.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{

}

#include <stdio.h>
int	main(void)
{
	char	src[] = "hello";
	char	dst[10];

	ft_memcpy(dst, src, 6);
	printf("%s\n", dst); // Expected: hello
	return (0);
}

/*
DESCRIPTION:
Copy n bytes from src to dst.

RETURN:
Return the original pointer dst.

IMPORTANT:
Copy exactly n bytes.
Do not stop at '\0'.
Source and destination must not overlap.
*/
EOF

cat > ft_memmove.c <<'EOF'
#include "Header.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{

}

#include <stdio.h>
int	main(void)
{
	char	str[] = "abcdef";

	ft_memmove(str + 2, str, 4);
	printf("%s\n", str); // Expected: ababcd
	return (0);
}

/*
DESCRIPTION:
Copy len bytes from src to dst.

RETURN:
Return the original pointer dst.

IMPORTANT:
Unlike ft_memcpy, the source and destination may overlap.
The copy must still work correctly when memory overlaps.
Think about which direction the bytes should be copied.
*/
EOF

echo "Created:"
echo "ft_bzero.c"
echo "ft_memset.c"
echo "ft_memchr.c"
echo "ft_memcmp.c"
echo "ft_memcpy.c"
echo "ft_memmove.c"