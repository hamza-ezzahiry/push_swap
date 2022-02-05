/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aysarrar <aysarrar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/12 11:48:52 by aysarrar          #+#    #+#             */
/*   Updated: 2022/02/05 10:22:56 by aysarrar         ###   ########.fr       */
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



int main(int ac, char **av)
{
	if (ac > 1)
	{
		t_stack *stack_a;
		t_stack *stack_b;
		char	**numbers;

		numbers = get_numbers(av);
		push_elements(&stack_a, numbers);
		free_2d(numbers);
		print_stack(stack_a);
		if (check_sorted(&stack_a))
		{
			printf("Stack is sorted\n");
			free_stack(&stack_a);
			return (0);
		}
			
	}
}