/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aysarrar <aysarrar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 13:19:06 by aysarrar          #+#    #+#             */
/*   Updated: 2022/01/13 10:49:51 by aysarrar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

t_stack	*ft_lstnew(int number)
{
	t_stack	*new_elem;

	new_elem = malloc(sizeof(t_stack));
	if (!new_elem)
		return (NULL);
	new_elem->number = number;
	new_elem->next = NULL;
	return (new_elem);
}
