#include "Header.h"

void	ft_strdel(char **as)
{
	if (as && *as)
	{
		free(*as);
		*as = NULL;
	}
}

#include <stdio.h>
#include <stdlib.h>
int	main(void)
{
	char	*str;

	str = malloc(6);
	if (!str)
		return (1);
	str[0] = 'h';
	str[1] = 'e';
	str[2] = 'l';
	str[3] = 'l';
	str[4] = 'o';
	str[5] = '\0';

	printf("Before: %s\n", str);

	ft_strdel(&str);

	printf("After: %p\n", (void *)str); // Expected: NULL
	return (0);
}

/*
DESCRIPTION:
Free the dynamically allocated string pointed to by *as.
After freeing the memory, set the original pointer to NULL.

RETURN:
Nothing.

IMPORTANT:
as is a pointer to the string pointer.
*as is the actual string pointer that should be freed.

char *  = lets you change the string.
char ** = lets you change the pointer to the string.
*/
