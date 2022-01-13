/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aysarrar <aysarrar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 13:19:11 by aysarrar          #+#    #+#             */
/*   Updated: 2022/01/13 10:50:10 by aysarrar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

int	ft_lstsize(t_stack *lst)
{
	int		size;
	t_stack	*tmp;

	size = 0;
	tmp = lst;
	if (lst)
	{
		while (tmp != NULL)
		{
			size++;
			tmp = tmp->next;
		}
	}
	return (size);
}
