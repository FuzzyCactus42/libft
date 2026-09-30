/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhailat <hhailat@learner.42.tech>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/22 14:07:05 by hhailat           #+#    #+#             */
/*   Updated: 2026/09/23 15:31:32 by hhailat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

unsigned int	ft_lstsize(t_list *lst)
{
	int		counter;
	t_list	*current;

	counter = 0;
	current = lst;
	while (current)
	{
		current = current->next;
		counter++;
	}
	return (counter);
}
