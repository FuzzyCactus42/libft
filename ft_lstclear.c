/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhailat <hhailat@learner.42.tech>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/22 13:25:03 by hhailat           #+#    #+#             */
/*   Updated: 2026/09/22 13:28:36 by hhailat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*keeper;

	if (!lst)
		return ;
	while (*lst)
	{
		keeper = (*lst)->next;
		del((*lst)->content);
		free(*lst);
		*lst = keeper;
	}
}
