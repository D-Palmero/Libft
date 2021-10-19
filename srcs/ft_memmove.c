/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dapalmer <dapalmer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/21 12:34:07 by dapalmer          #+#    #+#             */
/*   Updated: 2019/11/21 12:34:09 by dapalmer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	const char	*f;
	char		*t;

	f = src;
	t = dst;
	if ((f != NULL || t != NULL) && len != 0)
	{
		if (f < t)
		{
			f += len;
			t += len;
			while (len-- > 0)
				*(--t) = *(--f);
		}
		else
			while (len-- > 0)
				*t++ = *f++;
	}
	return (dst);
}
