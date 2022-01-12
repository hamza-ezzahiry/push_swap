/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aysarrar <aysarrar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 17:40:04 by aysarrar          #+#    #+#             */
/*   Updated: 2022/01/06 14:49:40 by aysarrar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

char	*ft_strchr(const char *s, int c)
{
	size_t		index;
	size_t		size;

	index = 0;
	size = ft_strlen(s);
	while (index < size)
	{
		if (s[index] == (char )c)
			return ((char *)(s + index));
		index++;
	}
	if (c == '\0')
		return ((char *)(s + index));
	return (NULL);
}
