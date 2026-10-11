/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhailat <hhailat@learner.42.tech>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/22 17:15:11 by hhailat           #+#    #+#             */
/*   Updated: 2026/09/28 11:06:45 by hhailat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*n_list;
	t_list	*new_node;
	void	*content;

	if (!lst || !f || !del)
		return (NULL);
	n_list = NULL;
	while (lst)
	{
		content = f(lst->content);
		new_node = ft_lstnew(content);
		if (!new_node)
		{
			if (content)
				del(content);
			free(new_node);
			ft_lstclear(&n_list, del);
			return (NULL);
		}
		ft_lstadd_back(&n_list, new_node);
		lst = lst->next;
	}
	return (n_list);
}
void *plus(void *p_to_content)
{
	(*((int *)p_to_content))++;
	return (NULL);
}
#include <stdio.h>
int main()
{
	int ten = 10;
	t_list *n1;
	n1 = ft_lstnew(&ten);
	ft_lstmap(n1, plus(n1->content), free);
	printf("%i", *((int *)n1->content));
}