/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aysarrar <aysarrar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 13:20:14 by aysarrar          #+#    #+#             */
/*   Updated: 2022/01/06 14:49:40 by aysarrar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	int	index;

	index = 0;
	while (s[index])
	{
		(f)(index, &s[index]);
		index++;
	}
}
