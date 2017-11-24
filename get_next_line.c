/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmuselet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/22 14:12:19 by bmuselet          #+#    #+#             */
/*   Updated: 2017/11/24 15:01:56 by bmuselet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include "libft/libft.h"

int	get_next_line(const int fd, char **line)
{
	static char	*str;
	int			i;
	char		buff[BUFF_SIZE + 1];
	int			ret;

	if (!str && (str = (char *)ft_memalloc(sizeof(char))) == NULL)
		return (-1);
	while ((ret = read(fd, buff, BUFF_SIZE)) != 0)
	{
		if (ret < 0 || fd < 0 || line == NULL)
			return (-1);
		buff[ret] = '\0';
		str = ft_strjoin(str, buff);
	}
	i = 0;
	if (str[i])
	{
		while (str[i] != '\n' && str[i])
			i++;
		*line = ft_strsub(str, 0, i);
		str = &str[i + 1];
		return (1);
	}
	return (0);
}
