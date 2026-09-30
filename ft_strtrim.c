/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhailat <hhailat@learner.42.tech>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/16 12:48:12 by hhailat           #+#    #+#             */
/*   Updated: 2026/09/24 14:37:36 by hhailat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static int	ft_search(char const ch, char const *set)
{
	int	i;
	int	found;

	i = 0;
	found = 0;
	while (set[i] != '\0' && !found)
	{
		if (ch == set[i])
			found = 1;
		i++;
	}
	return (found);
}

static size_t	get_trim_string_len(char *p1, char *p2)
{
	size_t	i;

	i = 0;
	while (&p1[i] != &p2[0])
		i++;
	return (i + 1);
}

static int	is_there_spical_ch(char const *s1, char const *set)
{
	int	i;
	int	is_spical_ch;

	i = 0;
	is_spical_ch = 0;
	while (s1[i] != '\0' && !is_spical_ch)
	{
		if (!ft_search(s1[i], set))
			is_spical_ch = 1;
		i++;
	}
	return (is_spical_ch);
}

static void	find_bounds(char const *s1, char const *set,
		char **f_str, char **e_str)
{
	size_t	i;

	i = 0;
	while (s1[i] != '\0' && ft_search(s1[i], set))
		i++;
	*f_str = (char *)&s1[i];
	while (s1[i] != '\0')
		i++;
	i--;
	while (i != 0 && ft_search(s1[i], set))
		i--;
	*e_str = (char *)&s1[i];
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*t_str;
	char	*f_str;
	char	*e_str;
	size_t	len;
	size_t	i;

	if (s1 == NULL || set == NULL)
		return (NULL);
	if (!is_there_spical_ch(s1, set))
		return (ft_strdup(""));
	find_bounds(s1, set, &f_str, &e_str);
	len = get_trim_string_len(f_str, e_str);
	t_str = malloc(len + 1);
	if (t_str == NULL)
		return (NULL);
	i = 0;
	while (i < len)
	{
		t_str[i] = f_str[i];
		i++;
	}
	t_str[i] = '\0';
	return (t_str);
}
