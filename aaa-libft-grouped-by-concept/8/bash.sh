#!/bin/bash

cat > ft_strsub.c <<'EOF'
#include "Header.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{

}

#include <stdio.h>
#include <stdlib.h>
int	main(void)
{
	char	*str;

	str = ft_strsub("Hello World", 6, 5);
	if (!str)
		return (1);
	printf("%s\n", str); // Expected: World
	free(str);

	str = ft_strsub("abcdef", 2, 3);
	if (!str)
		return (1);
	printf("%s\n", str); // Expected: cde
	free(str);

	return (0);
}

/*
DESCRIPTION:
Create a new string containing len characters from s,
starting at index start.

RETURN:
Pointer to the newly allocated substring.
NULL if allocation fails.

IMPORTANT:
Use malloc.
Allocate len + 1 bytes.
Start copying from s[start].
Copy len characters.
Add '\0' at the end.

Example:

"Hello World"
 01234567890

start = 6
len = 5

Result:
"World"
*/
EOF

cat > ft_strjoin.c <<'EOF'
#include "Header.h"

char	*ft_strjoin(char const *s1, char const *s2)
{

}

#include <stdio.h>
#include <stdlib.h>
int	main(void)
{
	char	*str;

	str = ft_strjoin("Hello ", "World");
	if (!str)
		return (1);
	printf("%s\n", str); // Expected: Hello World
	free(str);

	str = ft_strjoin("abc", "def");
	if (!str)
		return (1);
	printf("%s\n", str); // Expected: abcdef
	free(str);

	return (0);
}

/*
DESCRIPTION:
Create a new string containing s1 followed by s2.

RETURN:
Pointer to the newly allocated joined string.
NULL if allocation fails.

IMPORTANT:
Find the length of both strings.
Allocate enough memory for both strings and '\0'.
Copy s1 first.
Then copy s2.
Add '\0' at the end.

Memory needed:

length of s1
+
length of s2
+
1 for '\0'
*/
EOF

cat > ft_strtrim.c <<'EOF'
#include "Header.h"

char	*ft_strtrim(char const *s)
{

}

#include <stdio.h>
#include <stdlib.h>
int	main(void)
{
	char	*str;

	str = ft_strtrim("   hello world   ");
	if (!str)
		return (1);
	printf("[%s]\n", str); // Expected: [hello world]
	free(str);

	str = ft_strtrim("\t\n  hello \n\t");
	if (!str)
		return (1);
	printf("[%s]\n", str); // Expected: [hello]
	free(str);

	str = ft_strtrim("hello");
	if (!str)
		return (1);
	printf("[%s]\n", str); // Expected: [hello]
	free(str);

	return (0);
}

/*
DESCRIPTION:
Create a new string with whitespace removed from
the beginning and end of s.

RETURN:
Pointer to the newly allocated trimmed string.
NULL if allocation fails.

IMPORTANT:
Do not remove whitespace from the middle of the string.

Find:
1. Where the useful string starts.
2. Where the useful string ends.
3. How much memory is needed.
4. Copy only that part into the new string.

Whitespace to remove:
' '
'\n'
'\t'
*/
EOF

cat > ft_strsplit.c <<'EOF'
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
EOF

echo "Created:"
echo "ft_strsub.c"
echo "ft_strjoin.c"
echo "ft_strtrim.c"
echo "ft_strsplit.c"