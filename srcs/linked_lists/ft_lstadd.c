#include "Header.h"
MAKE
void	ft_lstadd(t_list **alst, t_list *new)
{

}

#include <stdio.h>
int	main(void)
{
	t_list	first;
	t_list	second;
	t_list	*list;

	first.content = "first";
	first.content_size = 6;
	first.next = NULL;

	second.content = "second";
	second.content_size = 7;
	second.next = NULL;

	list = &first;

	ft_lstadd(&list, &second);

	printf("%s\n", (char *)list->content);       // Expected: second
	printf("%s\n", (char *)list->next->content); // Expected: first
	return (0);
}

/*
DESCRIPTION:
Add the node new to the beginning of the list.

RETURN:
Nothing.

IMPORTANT:
Before:

list
 |
 v
[first] -> NULL

new
 |
 v
[second] -> NULL


After:

list
 |
 v
[second] -> [first] -> NULL


Think about the order carefully:

1. Connect new to the old first node.
2. Change the beginning of the list to new.

alst is t_list ** because the function must be able
to change the original list pointer.
*/
