#include "Header.h"

char	*ft_strnew(size_t size)
{
	size_t	i;
	char	*str;

	i = 0;
	str = malloc(size + 1);
	if (!str)
		return (NULL);
	while (i < size)
	{
		str[i] = '\0';
		i++;
	}
	str[i] = '\0';
	return (str);
}

#include <stdio.h>
#include <stdlib.h>
int	main(void)
{
	char	*str;
	size_t	i;

	str = ft_strnew(5);
	if (!str)
		return (1);
	i = 0;
	while (i <= 5)
	{
		printf("%d ", str[i]); // Expected: 0 0 0 0 0 0
		i++;
	}
	printf("\n");
	free(str);
	return (0);
}

/*
DESCRIPTION:
Allocate a new string with space for size characters.

RETURN:
Pointer to the new string.
NULL if allocation fails.

IMPORTANT:
Allocate size + 1 bytes.
Initialize every byte to '\0'.
Remember the extra byte for the final '\0'.
*/
