/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aysarrar <aysarrar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 13:20:19 by aysarrar          #+#    #+#             */
/*   Updated: 2022/01/06 14:49:40 by aysarrar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*final;
	size_t	s1_len;
	size_t	s2_len;
	size_t	index;

	s1_len = ft_strlen(s1);
	s2_len = ft_strlen(s2);
	final = malloc(s1_len + s2_len + 1);
	if (!final)
		return (NULL);
	index = 0;
	while (s1[index])
	{
		final[index] = s1[index];
		index++;
	}
	index = 0;
	while (s2[index])
	{
		final[s1_len] = s2[index];
		index++;
		s1_len++;
	}
	final[s1_len] = '\0';
	return (final);
}
