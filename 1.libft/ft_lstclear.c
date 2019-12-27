#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list		*elmt_now;
	t_list		*elmt_next;

	if (lst && del)
	{
		elmt_now = *lst;
		elmt_next = *lst;
		while (elmt_next)
		{
			elmt_now = elmt_next;
			elmt_next = elmt_next->next;
			del(elmt_now->content);
			free(elmt_now);
		}
	}
	*lst = NULL;
}
