/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   instructions2.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aysarrar <aysarrar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/13 12:57:55 by aysarrar          #+#    #+#             */
/*   Updated: 2022/01/13 12:58:07 by aysarrar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

void	rotate_a(t_stack **stack_a)
{
	t_stack	*tmp;
	int		tmp_number;

	if (!stack_a || !*stack_a || !(*stack_a)->next)
		return ;
	tmp = *stack_a;
	while (tmp->next->next)
		tmp = tmp->next;
	tmp_number = tmp->next->number;
	tmp->next->number = tmp->number;
	tmp->number = tmp_number;
}

void	rotate_b(t_stack **stack_b)
{
	t_stack	*tmp;
	int		tmp_number;

	if (!stack_b || !*stack_b || !(*stack_b)->next)
		return ;
	tmp = *stack_b;
	while (tmp->next->next)
		tmp = tmp->next;
	tmp_number = tmp->next->number;
	tmp->next->number = tmp->number;
	tmp->number = tmp_number;
}

void	rotate_ab(t_stack **stack_a, t_stack **stack_b)
{
	rotate_a(stack_a);
	rotate_b(stack_b);
}

void	reverse_rotate_a(t_stack **stack_a)
{
	t_stack	*tmp;
	int		tmp_number;

	if (!stack_a || !*stack_a || !(*stack_a)->next)
		return ;
	tmp = *stack_a;
	while (tmp->next->next)
		tmp = tmp->next;
	tmp_number = tmp->number;
	tmp->number = tmp->next->number;
	tmp->next->number = tmp_number;
}

void	reverse_rotate_b(t_stack **stack_b)
{
	t_stack	*tmp;
	int		tmp_number;

	if (!stack_b || !*stack_b || !(*stack_b)->next)
		return ;
	tmp = *stack_b;
	while (tmp->next->next)
		tmp = tmp->next;
	tmp_number = tmp->number;
	tmp->number = tmp->next->number;
	tmp->next->number = tmp_number;
}