#include "Header.h"

char	**ft_strsplit(char const *s, char c)
{
	
}

#include <stdio.h>
#include <stdlib.h>
int	main(void)
{
	char	**split;
	int		i;

	split = ft_strsplit("hello world from codam", ' ');
	if (!split)
		return (1);

	i = 0;
	while (split[i])
	{
		printf("%s\n", split[i]);
		free(split[i]);
		i++;
	}
	free(split);

	/*
	Expected:

	hello
	world
	from
	codam
	*/

	return (0);
}

/*
DESCRIPTION:
Split a string into multiple newly allocated strings
using c as the separator.

RETURN:
A newly allocated array of strings.
The final pointer in the array must be NULL.
NULL if allocation fails.

IMPORTANT:
This function has multiple levels of memory.

Example:

"hello world from codam"

becomes:

split
  |
  v
+-------+
|   *   | ---> "hello"
+-------+
|   *   | ---> "world"
+-------+
|   *   | ---> "from"
+-------+
|   *   | ---> "codam"
+-------+
| NULL  |
+-------+

Think about the problem in steps:

1. Count how many words exist.
2. Allocate the char ** array.
3. Find the beginning of each word.
4. Find the length of each word.
5. Allocate memory for each word.
6. Copy each word.
7. Set the final pointer to NULL.

IMPORTANT EDGE CASES:

"hello   world"
Multiple separators should not create empty words.

"   hello"
Ignore separators at the beginning.

"hello   "
Ignore separators at the end.

""
Should produce an empty split array ending with NULL.

Every allocated word must eventually be freed.
The array itself must also eventually be freed.
*/
