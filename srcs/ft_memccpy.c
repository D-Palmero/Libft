/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dapalmer <dapalmer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/21 12:33:22 by dapalmer          #+#    #+#             */
/*   Updated: 2019/11/21 12:33:24 by dapalmer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned char		*mdst;
	const unsigned char	*msrc;

	mdst = (unsigned char *)dst;
	msrc = (const unsigned char *)src;
	if (n)
	{
		while (n-- != 0)
			if ((*mdst++ = *msrc++) == (unsigned char)c)
				return (mdst);
	}
	return (NULL);
}
