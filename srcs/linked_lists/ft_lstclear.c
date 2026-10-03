#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*tmp;

	if (!lst || !del)
		return ;
	while (*lst)
	{
		tmp = (*lst)->next;
		del((*lst)->content);
		free(*lst);
		*lst = tmp;
	}
}

void	del(void *content)
{
	free(content);
}
int	main(void)
{
	t_list	*a;
	t_list	*b;

	a = ft_lstnew(malloc(1));
	b = ft_lstnew(malloc(1));
	a->next = b;
	printf("before: %d nodes\n", ft_lstsize(a));
	ft_lstclear(&a, del);
	printf("after: %d nodes\n", ft_lstsize(a));
	printf("list: %p\n", (void *)a);
	return (0);
}

/*
Allowed functions: free

Goal:
Delete every node in a linked list and set the list pointer to NULL.

TODO:
1. Save the next node before deleting the current node.
2. Delete each node's content and free each node.
3. Set the original list pointer to NULL when finished.

Test notes:
The normal case clears three dynamically allocated nodes.
The test verifies that the original list pointer becomes NULL.
The boundary case attempts to clear an already empty list.

Expected output:
before: list exists
after: NULL
empty: NULL
*/
