#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	new->next = *lst;
	*lst = new;
}

int	main(void)
{
	t_list	a;
	t_list	b;
	t_list	*lst;

	a.content = "A";
	a.next = NULL;
	b.content = "B";
	b.next = NULL;
	lst = &a;
	ft_lstadd_front(&lst, &b);
	printf("first: %s\n", (char *)lst->content);
	printf("second: %s\n", (char *)lst->next->content);
	return (0);
}
// exspected:
// first: B
// second: A

/*
Adds the node 'new' at the beginning of the list.
*/