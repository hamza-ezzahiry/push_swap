/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_numbers.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aysarrar <aysarrar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/12 11:56:08 by aysarrar          #+#    #+#             */
/*   Updated: 2022/01/15 14:38:23 by aysarrar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

char	*join_strings(char **av)
{
	char	*final_str;
	char	*space;
	int		index;

	index = 1;
	space = " ";
	final_str = NULL;
	while (av[index])
	{
		if (!final_str)
			final_str = ft_strdup(av[index]);
		else
		{
			join_bufto_str(&final_str, space);
			join_bufto_str(&final_str, av[index]);
		}
		index++;
	}
	return (final_str);
}

int	ft_str_check_numbers(char *str)
{
	int	index;

	index = 0;
	while (str[index])
	{
		if (str[index] == '-' || str[index] == '+')
		{
			index++;
			if (!ft_isdigit(str[index]))
				return (0);	
		}
		else if (!ft_isdigit(str[index]))
			return (0);
		index++;
	}
	return (1);
}

int	check_numbers(char **av)
{
	int		index;
	char	*ptr;

	index = 1;
	while (av[index])
	{
		ptr = av[index];
		if (ptr[0] == '-' || ptr[0] == '+')
		{
			if (!ft_str_check_numbers(++ptr))
				return (0);
		}
		else if (!ft_str_check_numbers(ptr))
			return (0);
		index++;
	}
	return (1);
}
