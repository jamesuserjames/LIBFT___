#include "Header.h"

void	ft_lstdelone(t_list **alst, void (*del)(void *, size_t))
{

}

static void	ft_delete_content(void *content, size_t size)
{
	(void)size;
	free(content);
}

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int	main(void)
{
	t_list	*node;

	node = malloc(sizeof(t_list));
	if (!node)
		return (1);

	node->content = strdup("hello");
	if (!node->content)
	{
		free(node);
		return (1);
	}

	node->content_size = 6;
	node->next = NULL;

	ft_lstdelone(&node, ft_delete_content);

	printf("%p\n", (void *)node); // Expected: NULL
	return (0);
}

/*
DESCRIPTION:
Delete ONE linked-list node.

RETURN:
Nothing.

IMPORTANT:
There are potentially TWO allocations:

node
 |
 v
+---------+
| content | ---> allocated content
+---------+
| next    |
+---------+

First:
Use del to free the content.

Then:
Free the node itself.

Finally:
Set the original node pointer to NULL.

Do not simply free the node and forget its content.
*/
