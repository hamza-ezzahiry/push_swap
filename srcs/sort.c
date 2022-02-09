/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aysarrar <aysarrar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/15 12:11:54 by aysarrar          #+#    #+#             */
/*   Updated: 2022/02/09 16:54:34 by aysarrar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

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

static void	sort_three(t_stack **stack_a)
{
	if ((*stack_a)->number > (*stack_a)->next->number)
	{
		swap_a(stack_a);
		ft_putendl_fd("sa", 1);
	}
	if (!check_sorted(stack_a))
	{
		reverse_rotate_a(stack_a);
		ft_putendl_fd("rra", 1);
	}
	if (!check_sorted(stack_a))
	{
		swap_a(stack_a);
		ft_putendl_fd("sa", 1);
	}
}

static void	ra_or_rra(int index, int jndex, t_stack **stack_a)
{
	if (jndex > index)
	{
		rotate_a(stack_a);
		ft_putendl_fd("ra", 1);
	}
	else
	{
		reverse_rotate_a(stack_a);
		ft_putendl_fd("rra", 1);
	}
}

static void	push_smallest(t_stack **stack_a, t_stack **stack_b)
{
	t_stack	*tmp;
	int		smallest;
	int		jndex;
	int		index;

	smallest = get_smallest_number(*stack_a);
	jndex = ft_lstsize(*stack_a) / 2;
	tmp = *stack_a;
	while (tmp->number != smallest)
	{
		index = get_index(*stack_a, smallest);
		ra_or_rra(index, jndex, stack_a);
		tmp = *stack_a;
	}
	if (check_sorted(stack_a))
		return ;
	push_b(stack_a, stack_b);
	ft_putendl_fd("pb", 1);
}

static void	sort_lessten(t_stack **stack_a, t_stack **stack_b)
{
	while (ft_lstsize(*stack_a) != 3 && !check_sorted(stack_a))
		push_smallest(stack_a, stack_b);
	sort_three(stack_a);
	while (ft_lstsize(*stack_b) != 0)
	{
		push_a(stack_a, stack_b);
		ft_putendl_fd("pa", 1);
	}
}

void	sort(t_stack **stack_a, t_stack **stack_b)
{
	if (ft_lstsize(*stack_a) == 2)
	{
		swap_a(stack_a);
		ft_putendl_fd("sa", 1);
	}
	else if (ft_lstsize(*stack_a) == 3)
		sort_three(stack_a);
	else if (ft_lstsize(*stack_a) <= 9)
		sort_lessten(stack_a, stack_b);
}