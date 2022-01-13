/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aysarrar <aysarrar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/12 11:48:52 by aysarrar          #+#    #+#             */
/*   Updated: 2022/01/13 12:38:24 by aysarrar         ###   ########.fr       */
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
		t_stack	*stack_a;
		t_stack	*stack_b;
		t_stack *tmp;
		char **params = get_numbers(av);
		push_elements(&stack_a, params);
		tmp = stack_a;
		while (tmp)
		{
			printf("%d ", tmp->number);
			tmp = tmp->next;
		}
		swap_a(&stack_a);
		tmp = stack_a;
		while (tmp)
		{
			printf("%d ", tmp->number);
			tmp = tmp->next;
		}
	}
}