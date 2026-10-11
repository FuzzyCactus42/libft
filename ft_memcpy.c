/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhailat <hhailat@learner.42.tech>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/08 12:36:56 by hhailat           #+#    #+#             */
/*   Updated: 2026/09/08 14:19:48 by hhailat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	const char	*ps;
	char		*pd;
	size_t		i;

	i = 0;
	pd = dest;
	ps = src;
	while (i < n)
	{
		pd[i] = ps[i];
		i++;
	}
	return (dest);
}
