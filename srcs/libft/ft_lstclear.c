/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aysarrar <aysarrar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 13:18:39 by aysarrar          #+#    #+#             */
/*   Updated: 2022/01/13 10:51:40 by aysarrar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

void	ft_lstclear(t_stack **lst, void (*del)(void *))
{
	t_stack	*tmp;
	t_stack	*next;

	tmp = *lst;
	while (tmp != NULL)
	{
		next = tmp->next;
		(del)(tmp->number);
		free(tmp);
		tmp = next;
	}
	*lst = NULL;
}
