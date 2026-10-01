#include "Header.h"

void	ft_lstdel(t_list **alst, void (*del)(void *, size_t))
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
	t_list	*a;
	t_list	*b;
	t_list	*c;

	a = malloc(sizeof(t_list));
	b = malloc(sizeof(t_list));
	c = malloc(sizeof(t_list));
	if (!a || !b || !c)
		return (1);

	a->content = strdup("one");
	b->content = strdup("two");
	c->content = strdup("three");

	a->content_size = 4;
	b->content_size = 4;
	c->content_size = 6;

	a->next = b;
	b->next = c;
	c->next = NULL;

	ft_lstdel(&a, ft_delete_content);

	printf("%p\n", (void *)a); // Expected: NULL
	return (0);
}

/*
DESCRIPTION:
Delete an entire linked list.

RETURN:
Nothing.

IMPORTANT:
Every node must be deleted.

Before:

alst
 |
 v
[a] -> [b] -> [c] -> NULL


After:

alst
 |
 v
NULL


BE CAREFUL:

If you free the current node before remembering
where the next node is, you lose access to the list.

Think about:

current
next

For every node:

1. Remember next.
2. Delete current content.
3. Delete current node.
4. Move to next.

Finally set the original list pointer to NULL.
*/
