/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aysarrar <aysarrar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/15 12:11:54 by aysarrar          #+#    #+#             */
/*   Updated: 2022/02/09 14:58:45 by aysarrar         ###   ########.fr       */
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

static void	push_smallest_two(t_stack **stack_a, t_stack **stack_b)
{
	int	smallest;
	int	jndex;
	int	index;

	smallest = get_smallest_number(stack_a);
	index = get_index(stack_a, smallest);
	
	
}

static void	sort_five(t_stack **stack_a, t_stack **stack_b)
{
	int	smallest;

	
}

void	sort(t_stack **stack_a, t_stack **stack_b)
{
	if (ft_lstsize(*stack_a) == 2)
	{
		if (!check_sorted(stack_a))
		{
			swap_a(stack_a);
			ft_putendl_fd("sa", 1);
		}
	}
	else if (ft_lstsize(*stack_a) == 3)
		sort_three(stack_a);
	else if (ft_lstsize(*stack_a) == 5)
		sort_five(stack_a, stack_b);
}