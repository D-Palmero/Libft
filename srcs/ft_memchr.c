/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dapalmer <dapalmer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/21 12:33:29 by dapalmer          #+#    #+#             */
/*   Updated: 2019/11/21 12:33:31 by dapalmer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const char *p;

	if (n != 0)
	{
		p = s;
		while (n-- != 0)
		{
			if (*p++ == (char)c)
				return ((void *)(p - 1));
		}
	}
	return (NULL);
}
