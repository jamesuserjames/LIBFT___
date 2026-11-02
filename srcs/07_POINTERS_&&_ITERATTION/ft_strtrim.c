#include "Header.h"

int		ft_strll(char const *s)
{
	int		i;
	
	i = 0;
	while (s[i])
	{
		i++;
	}
	return (i);
}

char	*ft_strtrim(char const *s)
{
	int		i;
	int		j;
	int		sl;
	char	*str;

	sl = ft_strll(s) - 1;
	i = 0;
	j = 0;
	while (sl >= 0 && (s[sl] == ' ' || (s[sl] >= 9 && s[sl] <= 13)))
		sl--;
	while (s[i] == ' ' || (s[i] >= 9 && s[i] <= 13))
		i++;
	str = malloc((sl - i)+ 1);
	if (!str)
		return (NULL);
	while ((i + j) <= sl)
	{
		str[j] = s[i + j];
		j++;
	}
	str[j] = '\0';
	return (str);
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
