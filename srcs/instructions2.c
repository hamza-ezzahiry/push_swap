/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   instructions2.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aysarrar <aysarrar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/13 12:57:55 by aysarrar          #+#    #+#             */
/*   Updated: 2022/01/15 12:08:19 by aysarrar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

void	rotate_a(t_stack **stack_a)
{
	if (!stack_a || !*stack_a || !(*stack_a)->next)
		return ;
	push(stack_a, (*stack_a)->number);
	pop(stack_a);
}

void	rotate_b(t_stack **stack_b)
{
	if (!stack_b || !*stack_b || !(*stack_b)->next)
		return ;
	push(stack_b, (*stack_b)->number);
	pop(stack_b);
}

void	rotate_ab(t_stack **stack_a, t_stack **stack_b)
{
	rotate_a(stack_a);
	rotate_b(stack_b);
}

void	reverse_rotate_a(t_stack **stack_a)
{
	t_stack	*tmp;

	if (!stack_a || !*stack_a || !(*stack_a)->next)
		return ;
	tmp = *stack_a;
	while (tmp->next)
		tmp = tmp->next;
	insert_first(stack_a, tmp->number);
	remove_last(stack_a);
}

void	reverse_rotate_b(t_stack **stack_b)
{
	t_stack	*tmp;

	if (!stack_b || !*stack_b || !(*stack_b)->next)
		return ;
	tmp = *stack_b;
	while (tmp->next)
		tmp = tmp->next;
	insert_first(stack_b, tmp->number);
	remove_last(stack_b);
}