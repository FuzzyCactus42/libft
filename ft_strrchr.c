/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhailat <hhailat@learner.42.tech>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/10 18:35:54 by hhailat           #+#    #+#             */
/*   Updated: 2026/09/10 18:56:16 by hhailat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*p;

	if (s[0] != '\0')
	{
		p = ft_strrchr(&s[1], c);
		if (p != NULL)
			return (p);
	}
	if (c == '\0')
		return ((char *)&s[0]);
	if (s[0] == (char)c)
		return ((char *)&s[0]);
	return (NULL);
}
