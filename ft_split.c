#include "libft.h"

static int	ft_letter_count(char const *str, char c, int index)
{
    int     count;

    count = 0;
    while (str[index] && str[index] != c)
    {
        count++;
        index++;
    }
    return (count);
}
static int	ft_word_count(char const *str, char c)
{
    int		i;
    int     count;
    
    i = 0;
    count = 0;
    while (str[i])
    {
        if (str[i] != c)
        {
            while (str[i] != c && str[i])
                i++;
            count++;
        }
        else
            i++;
    }
    return (count);
}

static char	*ft_make_word(char const *str, char c, int *index)
{
	char	*word;
	int		i;

	i = 0;
	word = malloc(ft_letter_count(str, c, *index) + 1);
	if (!word)
		return (NULL);
	while (str[*index] && str[*index] != c)
		word[i++] = str[(*index)++];
	word[i] = '\0';
	return (word);
}

char	**ft_split(char const *s, char c)
{
	char	**strs;
	int		i;
	int		k;

	i = 0;
	k = 0;
	if (!s)
		return (NULL);
	strs = malloc(sizeof(char *) * (ft_word_count(s, c) + 1));
	if (!strs)
		return (NULL);
	while (s[k])
	{
		while (s[k] == c)
			k++;
		if (s[k])
			strs[i++] = ft_make_word(s, c, &k);
	}
	strs[i] = NULL;
	return (strs);
}

/*
Allocates memory (using malloc(3)) and returns an
array of strings obtained by splitting ’s’ using
the character ’c’ as a delimiter.
Each string in the returned array is allocated
independently.
The array of pointers itself is also allocated
dynamically.
The returned array must be NULL terminated.
*/

int	main(void)
{
	char	**str;
	int		i;
	
	i = 0;
	str = ft_split("hello world this is Codam", ' ');
	if (!str)
		return (1);
	while (str[i])
	{
		printf("%s\n", str[i]);
		free(str[i]);
		i++;
	}
	free(str);
	return (0);

}