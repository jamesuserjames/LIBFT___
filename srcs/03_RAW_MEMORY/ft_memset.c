#include "Header.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*str;
	size_t			i;

	i = 0;
	str = (unsigned char *)b;
	while (i < len)
	{
		str[i] = (unsigned char)c;
		i++;
	}
	return (b);
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
(unsigned char *);
RETURN:
Return the original pointer b.

IMPORTANT:
Work with raw memory, not strings.
Do not stop at '\0'.
c should be treated as an unsigned char.
*/

