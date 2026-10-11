/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhailat <hhailat@learner.42.tech>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/09 14:02:44 by hhailat           #+#    #+#             */
/*   Updated: 2026/09/09 14:03:13 by hhailat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	src_len;
	size_t	dst_len;

	j = 0;
	dst_len = 0;
	src_len = ft_strlen(src);
	while (dst[dst_len] != '\0' && dst_len < size)
		dst_len++;
	i = dst_len;
	if (size == 0)
		return (src_len);
	if (dst_len >= size)
		return (size + src_len);
	while (src[j] != '\0' && (i < size - 1))
		dst[i++] = src[j++];
	if (dst_len != size)
		dst[i] = '\0';
	return (src_len + dst_len);
}
