#!/bin/bash

cat > ft_strcpy.c <<'EOF'
#include "Header.h"

char	*ft_strcpy(char *dst, const char *src)
{

}

#include <stdio.h>
int	main(void)
{
	char	dst[20];

	ft_strcpy(dst, "hello");
	printf("%s\n", dst); // Expected: hello
	ft_strcpy(dst, "");
	printf("%s\n", dst); // Expected: empty line
	return (0);
}

/*
DESCRIPTION:
Copy src into dst, including the final '\0'.

RETURN:
Return dst.

IMPORTANT:
dst must have enough space for src and the final '\0'.
*/
EOF

cat > ft_strncpy.c <<'EOF'
#include "Header.h"

char	*ft_strncpy(char *dst, const char *src, size_t n)
{

}

#include <stdio.h>
int	main(void)
{
	char	dst[10];

	ft_strncpy(dst, "abc", 6);
	printf("%s\n", dst); // Expected: abc
	printf("%d %d %d\n", dst[3], dst[4], dst[5]); // Expected: 0 0 0
	return (0);
}

/*
DESCRIPTION:
Copy at most n characters from src into dst.
If src is shorter than n, fill the remaining bytes with '\0'.

RETURN:
Return dst.

IMPORTANT:
If src has length n or greater, dst may not end with '\0'.
*/
EOF

cat > ft_strcat.c <<'EOF'
#include "Header.h"

char	*ft_strcat(char *dst, const char *src)
{

}

#include <stdio.h>
int	main(void)
{
	char	dst[20] = "Hello ";

	ft_strcat(dst, "World");
	printf("%s\n", dst); // Expected: Hello World
	return (0);
}

/*
DESCRIPTION:
Append src to the end of dst.

RETURN:
Return dst.

IMPORTANT:
Find the end of dst first.
Copy src after it.
Add the final '\0'.
dst must have enough space.
*/
EOF

cat > ft_strncat.c <<'EOF'
#include "Header.h"

char	*ft_strncat(char *dst, const char *src, size_t n)
{

}

#include <stdio.h>
int	main(void)
{
	char	dst[20] = "Hello ";

	ft_strncat(dst, "World", 3);
	printf("%s\n", dst); // Expected: Hello Wor
	return (0);
}

/*
DESCRIPTION:
Append at most n characters from src to the end of dst.

RETURN:
Return dst.

IMPORTANT:
Always add a final '\0' after the copied characters.
dst must have enough space.
*/
EOF

cat > ft_strlcpy.c <<'EOF'
#include "Header.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{

}

#include <stdio.h>
int	main(void)
{
	char	dst[5];
	size_t	result;

	result = ft_strlcpy(dst, "hello", sizeof(dst));
	printf("%s\n", dst);       // Expected: hell
	printf("%zu\n", result);   // Expected: 5
	return (0);
}

/*
DESCRIPTION:
Copy src into dst while respecting dstsize.
If dstsize is greater than 0, dst must end with '\0'.

RETURN:
Return the total length of src.

IMPORTANT:
At most dstsize - 1 characters can be copied.
The return value is the length of src, not the number copied.
Handle dstsize == 0.
*/
EOF

cat > ft_strlcat.c <<'EOF'
#include "Header.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{

}

#include <stdio.h>
int	main(void)
{
	char	dst[10] = "abc";
	size_t	result;

	result = ft_strlcat(dst, "defghijk", sizeof(dst));
	printf("%s\n", dst);      // Expected: abcdefghi
	printf("%zu\n", result);  // Expected: 11
	return (0);
}

/*
DESCRIPTION:
Append src to dst while respecting the total size dstsize.

RETURN:
Return the length of the string it tried to create.

IMPORTANT:
dstsize is the total size of the destination buffer.
Leave space for the final '\0'.
The return value is not simply the number of characters copied.
Think carefully about what happens when dstsize is smaller than
the existing length of dst.
*/
EOF

echo "Created:"
echo "ft_strcpy.c"
echo "ft_strncpy.c"
echo "ft_strcat.c"
echo "ft_strncat.c"
echo "ft_strlcpy.c"
echo "ft_strlcat.c"