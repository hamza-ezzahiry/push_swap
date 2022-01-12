/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aysarrar <aysarrar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/06 15:10:41 by aysarrar          #+#    #+#             */
/*   Updated: 2022/01/06 15:13:53 by aysarrar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

void	join_bufto_str(char **str, void *buf)
{
	char	*tmp;

	tmp = ft_strjoin(*str, buf);
	ft_strdel(str);
	*str = tmp;
	return ;
}

char	*gnl(ssize_t readr, char **str_input)
{
	int		len;
	char	*tmp;
	char	*str_return;

	if (readr == 0 && **str_input == '\0')
	{
		ft_strdel(str_input);
		return (NULL);
	}
	len = 0;
	while ((*str_input)[len] != '\n' && (*str_input)[len] != '\0')
		len++;
	if ((*str_input)[len] == '\n')
	{
		str_return = ft_substr(*str_input, 0, len + 1);
		tmp = ft_strdup(&(*str_input)[len + 1]);
		ft_strdel(str_input);
		*str_input = tmp;
		return (str_return);
	}
	str_return = ft_substr(*str_input, 0, len);
	ft_strdel(str_input);
	return (str_return);
}

char	*get_next_line(int fd)
{
	static char	*str;
	char		buf[BUFFER_SIZE + 1];
	ssize_t		readr;

	if (fd == -1 || BUFFER_SIZE <= 0)
		return (NULL);
	readr = 1;
	while (readr)
	{
		readr = read(fd, buf, BUFFER_SIZE);
		if (readr == -1)
			return (NULL);
		buf[readr] = '\0';
		if (str == NULL)
			str = ft_strdup(buf);
		else if (str != NULL)
			join_bufto_str(&str, buf);
		if (ft_strchr(str, '\n'))
			break ;
	}
	return (gnl(readr, &str));
}
