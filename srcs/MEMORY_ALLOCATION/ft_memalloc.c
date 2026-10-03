#include "Header.h"

void	*ft_memalloc(size_t size)
{
	size_t	i;
	unsigned char	*str;
	
	i = 0;
	str = malloc(size);
	if (!str)
		return (NULL);
	while (i < size)
	{
		str[i] = 0;
		i++;
	}
	return ((void *)str);
}

#include <stdio.h>
#include <stdlib.h>
int	main(void)
{
	unsigned char	*ptr;
	size_t			i;

	ptr = ft_memalloc(5);
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
Allocate size bytes of memory and initialize every byte to 0.

RETURN:
Pointer to the allocated memory.
NULL if allocation fails.

IMPORTANT:
Use malloc.
The allocated memory must be initialized to zero.
The returned memory must eventually be freed.
*/
