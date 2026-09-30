/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhailat <hhailat@learner.42.tech>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/08 13:39:11 by hhailat           #+#    #+#             */
/*   Updated: 2026/09/08 17:59:51 by hhailat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	const char		*ps;
	char			*pd;
	size_t			i;

	i = 0;
	ps = src;
	pd = dest;
	if (dest > src)
	{
		while (n)
		{
			pd[n - 1] = ps[n - 1];
			n--;
		}
	}
	else
	{
		while (i < n)
		{
			pd[i] = ps[i];
			i++;
		}
	}
	return (dest);
}
