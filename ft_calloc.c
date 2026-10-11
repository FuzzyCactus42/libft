/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhailat <hhailat@learner.42.tech>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/12 15:09:46 by hhailat           #+#    #+#             */
/*   Updated: 2026/09/24 14:15:20 by hhailat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_calloc(size_t n, size_t size)
{
	char	*p;
	size_t	i;

	if (n == 0 || size == 0)
		return (malloc(0));
	if (size > SIZE_MAX / n)
		return (NULL);
	p = malloc(n * size);
	if (p == NULL)
		return (NULL);
	i = 0;
	while (i < (n * size))
	{
		p[i] = 0;
		i++;
	}
	return (p);
}
