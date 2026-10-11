/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhailat <hhailat@learner.42.tech>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/24 15:58:49 by hhailat           #+#    #+#             */
/*   Updated: 2026/09/24 15:58:57 by hhailat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sub_str;
	size_t	i;
	size_t	s_len;

	if (!s)
		return (NULL);
	s_len = ft_strlen(s);
	if (start >= s_len)
		return (ft_strdup(""));
	if ((s_len - start) < len)
		sub_str = malloc(((s_len - start) + 1) * sizeof(char));
	else
		sub_str = malloc((len + 1) * sizeof(char));
	if (sub_str == NULL)
		return (NULL);
	i = 0;
	while (i < len && s_len > start && s[start] != '\0')
	{
		sub_str[i] = s[start];
		start++;
		i++;
	}
	sub_str[i] = '\0';
	return (sub_str);
}
