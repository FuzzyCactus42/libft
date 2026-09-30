/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhailat <hhailat@learner.42.tech>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/16 12:56:15 by hhailat           #+#    #+#             */
/*   Updated: 2026/09/16 13:05:53 by hhailat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*f_str;
	int		i;
	int		j;

	i = 0;
	j = 0;
	f_str = malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (f_str == NULL)
		return (NULL);
	while (s1[i] != '\0')
	{
		f_str[i] = s1[i];
		i++;
	}
	while (s2[j] != '\0')
		f_str[i++] = s2[j++];
	f_str[i] = '\0';
	return (f_str);
}
