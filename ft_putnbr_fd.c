/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhailat <hhailat@learner.42.tech>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/23 15:34:20 by hhailat           #+#    #+#             */
/*   Updated: 2026/09/23 15:34:30 by hhailat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	char	*s;
	size_t	len;

	s = ft_itoa(n);
	if (!s)
		return ;
	len = ft_strlen(s);
	write(fd, s, len);
	free(s);
}
