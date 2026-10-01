#include "Header.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*str;
	size_t			i;

	i = 0;
	str = (unsigned char *)s;
	while (i < n)
	{
		str[i] = '\0';
		i++;
	}
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
