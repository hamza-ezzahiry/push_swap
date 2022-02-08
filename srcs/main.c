/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aysarrar <aysarrar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/12 11:48:52 by aysarrar          #+#    #+#             */
/*   Updated: 2022/02/08 11:23:01 by aysarrar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

char	**get_numbers(char **av)
{
	char	**params;
	char	*str;

	str = join_strings(av);
	if (!str)
		return (NULL);
	params = ft_split(str, ' ');
	if (!params)
	{
		free(str);
		return (NULL);
	}
	free(str);
	return (params);
}

void	check_sort(t_stack **stack_a)
{
	if (check_sorted(stack_a))
	{
		free_stack(stack_a);
		exit(1);
	}
}

int main(int ac, char **av)
{
	if (ac > 1)
	{
		t_stack *stack_a;
		t_stack *stack_b;
		char	**numbers;
		
		numbers = get_numbers(av);
		push_elements(&stack_a, numbers);
		check_sort(&stack_a);
	}
}