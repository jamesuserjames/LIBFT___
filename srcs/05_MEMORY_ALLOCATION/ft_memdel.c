#include "Header.h"

void	ft_memdel(void **ap)
{
	if (ap && *ap)
	{
		free(*ap);
		*ap = NULL;
	}
}

#include <stdio.h>
#include <stdlib.h>
int	main(void)
{
	void	*ptr;

	ptr = malloc(10);
	if (!ptr)
		return (1);
	printf("Before: %p\n", ptr);

	ft_memdel(&ptr);

	printf("After:  %p\n", ptr); // Expected: NULL
	return (0);
}

/*
DESCRIPTION:
Free the allocated memory pointed to by *ap.
Then set the original pointer to NULL.

RETURN:
Nothing.

IMPORTANT:
ap is a pointer to the original pointer.
*ap is the pointer that should be freed.

Think about:
ptr
&ptr
*ap
*/
