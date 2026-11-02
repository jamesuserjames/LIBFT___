#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new;
	t_list	*last;
	t_list	*node;

	new = NULL;
	last = NULL;
	while (lst)
	{
		node = ft_lstnew(f(lst->content));
		if (!node)
		{
			ft_lstclear(&new, del);
			return (NULL);
		}
		if (!new)
			new = node;
		else
			last->next = node;
		last = node;
		lst = lst->next;
	}
	return (new);
}

void	*copy_content(void *content)
{
	char	*copy;
	char	*str;
	int		i;

	str = (char *)content;
	copy = malloc(2);
	if (!copy)
		return (NULL);
	i = 0;
	copy[i] = str[i];
	copy[i + 1] = '\0';
	return (copy);
}
void	del(void *content)
{
	free(content);
}
int	main(void)
{
	t_list	a;
	t_list	b;
	t_list	*new;

	a.content = "A";
	a.next = &b;
	b.content = "B";
	b.next = NULL;
	new = ft_lstmap(&a, copy_content, del);
	printf("first: %s\n", (char *)new->content);
	printf("second: %s\n", (char *)new->next->content);
	ft_lstclear(&new, del);
	return (0);
}

/*
DESCRIPTION:
Iterates through the list 'ist', applies the function 'f'
to each node's content, and creates a new list resulting
of the successive applications of the function 'f'. The 'del'
function is used to delete the content of a node if needed.
*/