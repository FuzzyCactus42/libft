/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhailat <hhailat@learner.42.tech>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/16 14:36:13 by hhailat           #+#    #+#             */
/*   Updated: 2026/09/16 15:08:51 by hhailat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*arr;
	unsigned int	i;
	size_t			s_len;

	if (!s || !f)
		return (NULL);
	s_len = ft_strlen(s);
	arr = (char *)malloc(sizeof(char) * (s_len + 1));
	if (!arr)
		return (NULL);
	i = 0;
	while (i < s_len)
	{
		arr[i] = f(i, s[i]);
		i++;
	}
	arr[i] = '\0';
	return (arr);
}
