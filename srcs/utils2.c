/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils2.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aysarrar <aysarrar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 11:13:18 by aysarrar          #+#    #+#             */
/*   Updated: 2022/02/09 19:47:27 by aysarrar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

int	get_index(t_stack *stack_a, int number)
{
	t_stack	*tmp;
	int		index;

	tmp = stack_a;
	index = 0;
	while (tmp != NULL)
	{
		if (tmp->number == number)
			break ;
		tmp = tmp->next;
		index++;
	}
	return (index);
}

int	get_smallest_number(t_stack *stack_a)
{
	int		smallest;
	t_stack	*tmp;

	if (!stack_a)
		return (0);
	tmp = stack_a;
	smallest = tmp->number;
	while (tmp != NULL)
	{
		if (tmp->number < smallest)
			smallest = tmp->number;
		tmp = tmp->next;
	}
	return (smallest);
}

int	check_sorted(t_stack **stack_a)
{
	t_stack	*tmp;

	if (!stack_a)
		return (0);
	tmp = *stack_a;
	while (tmp->next)
	{
		if (tmp->number > tmp->next->number)
			return (0);
		tmp = tmp->next;
	}
	return (1);
}