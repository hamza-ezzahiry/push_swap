/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_operations.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aysarrar <aysarrar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/13 10:55:46 by aysarrar          #+#    #+#             */
/*   Updated: 2022/01/13 12:48:53 by aysarrar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

t_stack	*new_node(int number)
{
	t_stack	*new;

	new = malloc(sizeof(t_stack));
	if (!new)
		return (NULL);
	new->number = number;
	new->next = NULL;
	return (new);
}

int	push(t_stack **stack, int number)
{
	t_stack	*tmp;
	t_stack	*new;

	if (!stack)
		return (0);
	new = new_node(number);
	if (!new)
		return (0);
	if (!*stack)
	{
		*stack = new;
		return (1);
	}
	tmp = *stack;
	while (tmp->next)
		tmp = tmp->next;
	tmp->next = new;
	return (1);
}

int	insert_first(t_stack **stack, int number)
{
	t_stack	*new;

	if (!stack)
		return (0);
	new = new_node(number);
	if (!new)
		return (0);
	if (!*stack)
	{
		*stack = new;
		return (1);
	}
	new->next = *stack;
	*stack = new;
	return (1);
}

int	free_stack(t_stack **stack)
{
	t_stack	*tmp;

	if (!stack)
		return (0);
	while (*stack)
	{
		tmp = *stack;
		*stack = (*stack)->next;
		free(tmp);
	}
	return (1);
}

int pop(t_stack **stack)
{
	t_stack	*tmp;

	if (!stack || !*stack)
		return (0);
	tmp = *stack;
	*stack = (*stack)->next;
	free(tmp);
	return (1);
}

void	push_elements(t_stack **stack, char **av)
{
	long	number;
	int		index;

	index = 0;
	if (check_numbers(av))
	{
		while (av[index])
		{
			number = ft_atoi(av[index]);
			if (number < -2147483648 || number > 2147483647)
				handle_errors();
			if (!check_number(stack, number))
				free_and_exit(stack);
			if (!insert_first(stack, ft_atoi(av[index])))
				free_and_exit(stack);
			index++;
		}
	}
	else
		handle_errors();
}
