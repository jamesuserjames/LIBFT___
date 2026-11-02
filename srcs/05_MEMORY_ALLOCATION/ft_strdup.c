#include "Header.h"

int		ft_sstrlen(const char *str)
{
	int		i;
	
	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

char	*ft_strdup(const char *src)
{
	char	*dest;
	int		i;
	int		len;
	
	i = 0;
	len = ft_sstrlen(src);
	dest = malloc(len + 1 * sizeof(char));
	if (!dest)
		return (NULL);
	while (i < len)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
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
