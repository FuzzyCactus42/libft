/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhailat <hhailat@learner.42.tech>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/16 12:40:49 by hhailat           #+#    #+#             */
/*   Updated: 2026/09/24 16:03:26 by hhailat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static int	count_len(int n)
{
	long int	i;

	i = 0;
	while (n)
	{
		n = n / 10;
		i++;
	}
	return (i);
}

static int	count_ten_to_power_n(long int n)
{
	long long int	i;

	i = 1;
	while (n != 0)
	{
		i = i * 10;
		n = n / 10;
	}
	return (i / 10);
}

static void	handle_sign_and_zero(long int *np, char *str, long int *i)
{
	if (*np < 0)
	{
		str[(*i)++] = '-';
		*np *= -1;
	}
	if (*np == 0)
	{
		str[(*i)++] = '0';
		str[*i] = '\0';
	}
}

char	*ft_itoa(int n)
{
	long int	i;
	long int	the_value;
	char		*str;
	long int	np;

	i = 0;
	np = n;
	str = malloc((count_len(np) + 2 - (np > 0)) * sizeof(char));
	if (str == NULL)
		return (NULL);
	handle_sign_and_zero(&np, str, &i);
	the_value = count_ten_to_power_n(np);
	while (the_value)
	{
		str[i++] = (np / the_value) + 48;
		np = np % the_value;
		the_value = the_value / 10;
	}
	str[i] = '\0';
	return (str);
}
