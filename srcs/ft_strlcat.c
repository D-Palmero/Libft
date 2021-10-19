/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dapalmer <dapalmer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/21 12:34:28 by dapalmer          #+#    #+#             */
/*   Updated: 2019/11/21 12:45:22 by dapalmer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_strnlen(const char *s, size_t maxlen)
{
	size_t len;

	len = 0;
	while (len++ < maxlen)
		if (*s++ == '\0')
			break ;
	return (len - 1);
}

size_t			ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t		src_len;
	size_t		dst_len;

	src_len = ft_strlen(src);
	dst_len = ft_strnlen(dst, dstsize);
	if (dst_len == dstsize)
		return (dstsize + src_len);
	if (src_len < (dstsize - dst_len))
		ft_memcpy(dst + dst_len, src, src_len + 1);
	else
	{
		ft_memcpy(dst + dst_len, src, dstsize - dst_len - 1);
		dst[dstsize - 1] = '\0';
	}
	return (dst_len + src_len);
}
