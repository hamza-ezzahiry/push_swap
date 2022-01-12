/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aysarrar <aysarrar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/12 11:48:52 by aysarrar          #+#    #+#             */
/*   Updated: 2022/01/12 18:43:45 by aysarrar         ###   ########.fr       */
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
	printf("%d", ft_atoi("-21474836488"));
	return (0);
}