/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhailat <hhailat@learner.42.tech>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/12 11:00:58 by hhailat           #+#    #+#             */
/*   Updated: 2026/09/24 18:15:53 by hhailat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	the_start_of_num(const char *nptr)
{
	int	i;

	i = 0;
	while (nptr[i] != '\0')
	{
		if (nptr[i] == '+' || nptr[i] == '-'
			|| (nptr[i] >= '0' && nptr[i] <= '9'))
			return (i);
		if (nptr[i] != ' ' && (nptr[i] < 9 || nptr[i] > 13))
			return (-1);
		i++;
	}
	return (i);
}

static int	get_sign(const char nptr)
{
	if (nptr == '-')
		return (-1);
	return (1);
}

int	ft_atoi(const char *nptr)
{
	int			i;
	int			is_positive;
	long int	result;

	i = the_start_of_num(nptr);
	if (i == -1)
		return (0);
	is_positive = get_sign(nptr[i]);
	if (nptr[i] == '-' || nptr[i] == '+')
		i++;
	result = 0;
	while (nptr[i] != '\0' && nptr[i] >= '0' && nptr[i] <= '9')
	{
		result = result * 10 + (nptr[i] - '0');
		i++;
	}
	return (result * is_positive);
}
