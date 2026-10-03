#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (!lst)
		return (NULL);
	while (lst != NULL && lst->next != NULL)
		lst = lst->next;
	return (lst);
}

int	main(void)
{
	t_list	a;
	t_list	b;
	t_list	c;
	t_list	*last;

	a.content = "A";
	a.next = &b;
	b.content = "B";
	b.next = &c;
	c.content = "C";
	c.next = NULL;
	last = ft_lstlast(&a);
	printf("three nodes: %s\n", (char *)last->content);
	last = ft_lstlast(&c);
	printf("one node: %s\n", (char *)last->content);
	return (0);
}

/*
	DESCRIPTION :
	The function ft_lstlast finds the last node in a given list.
	RETURN VALUE :
	The last node of a list.
*/