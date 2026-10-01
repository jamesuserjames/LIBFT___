#include "Header.h"

void	ft_lstiter(t_list *lst, void (*f)(t_list *elem))
{

}

static void	ft_print_node(t_list *elem)
{
	printf("%s\n", (char *)elem->content);
}

#include <stdio.h>
int	main(void)
{
	t_list	a;
	t_list	b;
	t_list	c;

	a.content = "one";
	a.next = &b;

	b.content = "two";
	b.next = &c;

	c.content = "three";
	c.next = NULL;

	ft_lstiter(&a, ft_print_node);

	/*
	Expected:

	one
	two
	three
	*/

	return (0);
}

/*
DESCRIPTION:
Go through every node in the linked list
and apply function f to each node.

RETURN:
Nothing.

IMPORTANT:
This is similar to iterating through a string,
but instead of:

i++

you move using:

lst = lst->next

Example:

[a] -> [b] -> [c] -> NULL

Call:

f(a)
f(b)
f(c)
*/
