/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhailat <hhailat@learner.42.tech>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/16 12:59:04 by hhailat           #+#    #+#             */
/*   Updated: 2026/09/16 13:05:33 by hhailat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*s3;
	const unsigned char	*s4;
	size_t				i;

	i = 0;
	s3 = s1;
	s4 = s2;
	if (n == 0)
		return (0);
	while (i < n)
	{
		if ((s3[i] - s4[i]) == 0)
			i++;
		else
			return (s3[i] - s4[i]);
	}
	return (0);
}
