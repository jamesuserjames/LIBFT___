#include "Header.h"

t_list	*ft_lstnew(void const *content, size_t content_size)
{

}

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int	main(void)
{
	t_list	*node;
	char	str[] = "hello";

	node = ft_lstnew(str, strlen(str) + 1);
	if (!node)
		return (1);

	printf("%s\n", (char *)node->content); // Expected: hello
	printf("%zu\n", node->content_size);   // Expected: 6
	printf("%p\n", (void *)node->next);    // Expected: NULL

	free(node->content);
	free(node);
	return (0);
}

/*
DESCRIPTION:
Create a new linked-list node.

RETURN:
Pointer to the newly allocated node.
NULL if allocation fails.

IMPORTANT:
A node contains:

content
content_size
next

Allocate memory for the node.

If content is not NULL:
Allocate memory for a COPY of content.
Copy content_size bytes into it.

Set:
node->content_size = content_size
node->next = NULL

Think of a node like:

+--------------+
| content      | ---> data
+--------------+
| content_size |
+--------------+
| next         | ---> NULL
+--------------+
*/
