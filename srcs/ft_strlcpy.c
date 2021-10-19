/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dapalmer <dapalmer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/21 12:34:34 by dapalmer          #+#    #+#             */
/*   Updated: 2019/11/21 12:34:35 by dapalmer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t			ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	const char	*s;
	size_t		n;

	if (dst == NULL || src == NULL)
		return ((size_t)((src == NULL) ? src : dst));
	s = src;
	n = dstsize;
	if (n != 0)
		while (--n != 0)
			if ((*dst++ = *src++) == '\0')
				break ;
	if (n == 0)
	{
		if (dstsize != 0)
			*dst = '\0';
		while (*src++)
			;
	}
	return ((size_t)(src - s - 1));
}
