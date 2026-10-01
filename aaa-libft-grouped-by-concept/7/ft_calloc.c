#include "Header.h"

void	*ft_calloc(size_t count, size_t size)
{
	char	*str;
	size_t	i;

	i = 0;
	str = malloc(count * size);
	if (!str)
		return (NULL);
	while (i < count * size)
	{
		str[i] = 0;
		i++;
	}
	return (str);
}

#include <stdio.h>
#include <stdlib.h>
int	main(void)
{
	int		*ptr;
	size_t	i;

	ptr = ft_calloc(5, sizeof(int));
	if (!ptr)
		return (1);
	i = 0;
	while (i < 5)
	{
		printf("%d ", ptr[i]); // Expected: 0 0 0 0 0
		i++;
	}
	printf("\n");
	free(ptr);
	return (0);
}

/*
DESCRIPTION:
Allocate memory for count elements of size bytes each.
Initialize all allocated bytes to 0.

RETURN:
Pointer to the allocated memory.
NULL if allocation fails.

IMPORTANT:
Total memory needed is count * size.
Initialize all bytes to zero.
Think about what happens if count * size overflows.
The returned memory must eventually be freed.
*/
