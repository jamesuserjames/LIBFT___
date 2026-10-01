#include "Header.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{

}

static t_list	*ft_copy_node(t_list *elem)
{
	t_list	*new;

	new = malloc(sizeof(t_list));
	if (!new)
		return (NULL);

	new->content = strdup((char *)elem->content);
	if (!new->content)
	{
		free(new);
		return (NULL);
	}

	new->content_size = elem->content_size;
	new->next = NULL;
	return (new);
}

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int	main(void)
{
	t_list	a;
	t_list	b;
	t_list	*new_list;
	t_list	*tmp;

	a.content = "one";
	a.content_size = 4;
	a.next = &b;

	b.content = "two";
	b.content_size = 4;
	b.next = NULL;

	new_list = ft_lstmap(&a, ft_copy_node);
	if (!new_list)
		return (1);

	tmp = new_list;
	while (tmp)
	{
		printf("%s\n", (char *)tmp->content);
		tmp = tmp->next;
	}

	/*
	Expected:

	one
	two
	*/

	while (new_list)
	{
		tmp = new_list->next;
		free(new_list->content);
		free(new_list);
		new_list = tmp;
	}

	return (0);
}

/*
DESCRIPTION:
Create a NEW linked list by applying function f
to every node of the original list.

RETURN:
Pointer to the beginning of the new list.
NULL if allocation fails.

IMPORTANT:
Do not modify the original list.

Example:

Original:

[a] -> [b] -> [c] -> NULL

Apply:

f(a)
f(b)
f(c)

Create:

[new a] -> [new b] -> [new c] -> NULL


This combines several concepts:

Linked lists
+
malloc
+
function pointers
+
connecting nodes
+
memory ownership


Think about the problem in steps:

1. Apply f to the first node.
2. Store the returned new node.
3. Keep the beginning of the new list.
4. Move through the original list.
5. Apply f to each node.
6. Connect each new node to the previous new node.
7. Return the beginning of the new list.

This is one of the hardest Libft exercises.
*/
