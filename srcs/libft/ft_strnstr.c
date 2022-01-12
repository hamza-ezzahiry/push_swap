/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aysarrar <aysarrar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 13:20:59 by aysarrar          #+#    #+#             */
/*   Updated: 2022/01/06 14:49:40 by aysarrar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	index;

	if (!*little)
		return ((char *)big);
	index = 0;
	while (big[index] && len)
	{
		if (ft_strncmp(big + index, little, ft_strlen(little)) == 0
			&& len >= ft_strlen(little))
			return ((char *)(big + index));
		index++;
		len--;
	}
	return (NULL);
}
