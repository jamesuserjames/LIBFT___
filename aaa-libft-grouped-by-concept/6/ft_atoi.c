#include "Header.h"

int	ft_atoi(const char *str)
{
	int		i;
	int		num;
	int		sign;

	i = 0;
	num = 0;
	sign = 1;
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		num = (num * 10) + (str[i] - '0');
		i++;
	}
	return (num * sign);
}

#include <stdio.h>
int	main(void)
{
	printf("%d\n", ft_atoi("42"));          // Expected: 42
	printf("%d\n", ft_atoi("-42"));         // Expected: -42
	printf("%d\n", ft_atoi("+42"));         // Expected: 42
	printf("%d\n", ft_atoi("   123"));      // Expected: 123
	printf("%d\n", ft_atoi("\t\n  -123"));  // Expected: -123
	printf("%d\n", ft_atoi("123abc"));      // Expected: 123
	printf("%d\n", ft_atoi("abc123"));      // Expected: 0
	printf("%d\n", ft_atoi("0"));           // Expected: 0
	return (0);
}

/*
DESCRIPTION:
Convert the beginning of a string into an integer.

RETURN:
The integer represented by the string.

IMPORTANT:
Skip leading whitespace.
Handle an optional '+' or '-'.
Read digits until a non-digit is found.

ASCII whitespace:
' '  = 32
'\t' = 9
'\n' = 10
'\v' = 11
'\f' = 12
'\r' = 13
*/
