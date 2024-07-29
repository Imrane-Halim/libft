#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	if (!lst)
		return ;
	while (*lst)
	{
		del(*lst);
		*lst = (*lst)->next;
	}
	free(*lst);
	*lst = NULL;
}