#!/bin/bash

cat > ft_memalloc.c <<'EOF'
#include "Header.h"

void	*ft_memalloc(size_t size)
{

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
EOF

cat > ft_calloc.c <<'EOF'
#include "Header.h"

void	*ft_calloc(size_t count, size_t size)
{

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
EOF

cat > ft_strnew.c <<'EOF'
#include "Header.h"

char	*ft_strnew(size_t size)
{

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
EOF

cat > ft_strdup.c <<'EOF'
#include "Header.h"

char	*ft_strdup(const char *src)
{

}

#include <stdio.h>
#include <stdlib.h>
int	main(void)
{
	char	*copy;

	copy = ft_strdup("hello");
	if (!copy)
		return (1);
	printf("%s\n", copy); // Expected: hello
	free(copy);

	copy = ft_strdup("");
	if (!copy)
		return (1);
	printf("%s\n", copy); // Expected: empty line
	free(copy);
	return (0);
}

/*
DESCRIPTION:
Create a newly allocated copy of src.

RETURN:
Pointer to the new copied string.
NULL if allocation fails.

IMPORTANT:
Find the length of src.
Allocate enough memory for the string and '\0'.
Copy the complete string.
The returned string must eventually be freed.
*/
EOF

cat > ft_memdel.c <<'EOF'
#include "Header.h"

void	ft_memdel(void **ap)
{

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
EOF

cat > ft_strdel.c <<'EOF'
#include "Header.h"

void	ft_strdel(char **as)
{

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
EOF

echo "Created:"
echo "ft_memalloc.c"
echo "ft_calloc.c"
echo "ft_strnew.c"
echo "ft_strdup.c"
echo "ft_memdel.c"
echo "ft_strdel.c"