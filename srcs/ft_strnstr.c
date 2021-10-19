/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dapalmer <dapalmer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/21 12:35:04 by dapalmer          #+#    #+#             */
/*   Updated: 2019/11/21 12:35:06 by dapalmer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t needle_length;

	if (*needle == '\0')
		return ((char *)haystack);
	needle_length = ft_strlen(needle);
	while ((*haystack != '\0') && (len-- >= needle_length))
	{
		if (ft_toupper(*haystack) == ft_toupper(*needle))
			if (ft_strncmp(haystack, needle, needle_length) == 0)
				return ((char *)haystack);
		haystack++;
	}
	return (NULL);
}
