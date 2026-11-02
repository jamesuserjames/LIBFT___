#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*arr;

	arr = (t_list *)malloc(sizeof(t_list) * 1); // why * 1
	if (!arr)
		return (NULL);
	arr->content = content; 	// wtf if this supposed to do 
	arr->next = NULL;			// same question here
	return (arr);
}

int	main(void)
{
	t_list	*node;

	node = ft_lstnew("Hello");
	printf("content: %s\n", (char *)node->content);
	printf("next: %p\n", (void *)node->next);
	return (0);
}
// exspected output:
// content: Hello
// next: 0x0v

/*
Return Value
A pointer to the new node.

Allocates memory (using malloc(3)) and returns a new node.
The 'content' member variable is initialized with the given parameter 'content'.
The variable 'next' is initialized to NULL.
*/