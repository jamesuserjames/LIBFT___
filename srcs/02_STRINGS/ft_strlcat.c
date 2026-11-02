#include "Header.h"

int	ft_strlen(char *str)
{
	int		i;
	
	i = 0;
	while (str[i])
		i++;
	return (i);
}

size_t	ft_strlcat(char *dst, char *src, size_t dstsize)
{
	size_t	i;
	size_t	sl;
	size_t	dl;

	i = 0;
	sl = (size_t)ft_strlen(src);
	dl = (size_t)ft_strlen(dst);
	if (dstsize <= dl)
		return (dstsize + sl);
	while (src[i] && dl + i + 1 < dstsize)
	{
		dst[dl + i] = src[i];
		i++;
	}
	dst[dl + i] = '\0';
	if (dstsize < dl + sl)
		return (dstsize);
	return (dl + sl);
}

#include <stdio.h>

int	main(void)
{
	char	dst1[20] = "Hello ";
	char	dst2[10] = "Hello ";
	char	dst3[12] = "Hello ";
	char	dst4[20] = "Hello";
	char	dst5[20] = "";
	char	dst6[20] = "Hello";
	char	dst7[20] = "Hello";

	printf("\n--- TEST 1: enough space ---\n");
	printf("return: %zu\n", ft_strlcat(dst1, "World", 20));
	printf("string: %s\n", dst1);
	// Expected: return 11, string "Hello World"

	printf("\n--- TEST 2: not enough space ---\n");
	printf("return: %zu\n", ft_strlcat(dst2, "World", 10));
	printf("string: %s\n", dst2);
	// Expected: return 11, string "Hello Wor"

	printf("\n--- TEST 3: exact space ---\n");
	printf("return: %zu\n", ft_strlcat(dst3, "World", 12));
	printf("string: %s\n", dst3);
	// Expected: return 11, string "Hello World"

	printf("\n--- TEST 4: empty src ---\n");
	printf("return: %zu\n", ft_strlcat(dst4, "", 20));
	printf("string: %s\n", dst4);
	// Expected: return 5, string "Hello"

	printf("\n--- TEST 5: empty dst ---\n");
	printf("return: %zu\n", ft_strlcat(dst5, "World", 20));
	printf("string: %s\n", dst5);
	// Expected: return 5, string "World"

	printf("\n--- TEST 6: dstsize = 0 ---\n");
	printf("return: %zu\n", ft_strlcat(dst6, "World", 0));
	printf("string: %s\n", dst6);
	// Expected: return 5, string "Hello"

	printf("\n--- TEST 7: dstsize smaller than dst ---\n");
	printf("return: %zu\n", ft_strlcat(dst7, "World", 3));
	printf("string: %s\n", dst7);
	// Expected: return 8, string "Hello"

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
