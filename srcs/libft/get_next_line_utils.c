/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aysarrar <aysarrar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/06 15:10:47 by aysarrar          #+#    #+#             */
/*   Updated: 2022/01/06 15:14:28 by aysarrar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

char	*ft_strdel(char **adr_str)
{
	if (adr_str != NULL && *adr_str != NULL)
	{
		free(*adr_str);
		*adr_str = NULL;
	}
	return (NULL);
}
