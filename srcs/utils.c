/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aysarrar <aysarrar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/12 11:49:54 by aysarrar          #+#    #+#             */
/*   Updated: 2022/01/12 18:14:15 by aysarrar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

void	handle_errors(void)
{
	ft_putendl_fd("Error", 1);
	exit(1);
}

void	*free_2d(char **tab)
{
	int	index;

	index = 0;
	while (tab[index])
	{
		free(tab[index]);
		index++;
	}
	free(tab);
	return (NULL);
}