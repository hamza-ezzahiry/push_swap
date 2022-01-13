/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   instructions.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aysarrar <aysarrar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/13 12:33:30 by aysarrar          #+#    #+#             */
/*   Updated: 2022/01/13 13:20:59 by aysarrar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

void	swap_a(t_stack **stack_a)
{
	t_stack	*tmp;
	int		tmp_number;

	if (!stack_a || !*stack_a || !(*stack_a)->next)
		return ;
	tmp = *stack_a;
	tmp_number = tmp->number;
	tmp->number = tmp->next->number;
	tmp->next->number = tmp_number;
}

void	swap_b(t_stack **stack_b)
{
	t_stack	*tmp;
	int		tmp_number;

	if (!stack_b || !*stack_b || !(*stack_b)->next)
		return ;
	tmp = *stack_b;
	tmp_number = tmp->number;
	tmp->number = tmp->next->number;
	tmp->next->number = tmp_number;
}

void	swap_ab(t_stack **stack_a, t_stack **stack_b)
{
	swap_a(stack_a);
	swap_b(stack_b);
}

void	push_a(t_stack **stack_a, t_stack **stack_b)
{
	if (!stack_b || !*stack_b || !stack_a)
		return ;
	insert_first(stack_a, (*stack_b)->number);
	pop(stack_b);
}

void	push_b(t_stack **stack_a, t_stack **stack_b)
{
	if (!stack_a || !*stack_a || !stack_b)
		return ;
	insert_first(stack_b, (*stack_a)->number);
	pop(stack_a);
}
