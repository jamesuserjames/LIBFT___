#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int		count;
	t_list	*temp;

	count = 0;
	temp = (t_list *)lst;
	while (temp)
	{
		count++;
		temp = temp->next;
	}
	return (count);
}

int	main(void)
{
	t_list	a;
	t_list	b;
	t_list	c;

	a.content = "A";
	a.next = &b;
	b.content = "B";
	b.next = &c;
	c.content = "C";
	c.next = NULL;
	printf("three nodes: %d\n", ft_lstsize(&a));
	printf("one node: %d\n", ft_lstsize(&c));
	printf("empty list: %d\n", ft_lstsize(NULL));
	return (0);
}

/*
Return Value
The length of the

Counts the number of nodes in the list.
*/
