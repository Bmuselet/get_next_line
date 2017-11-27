/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmuselet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/22 14:12:19 by bmuselet          #+#    #+#             */
/*   Updated: 2017/11/27 16:23:41 by bmuselet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"
#include "get_next_line.h"

static int	ft_end_line(char **str, char **line)
{
	char	*tmp;
	char	*endl;
	int		i;

	i = 0;
	endl = *str;
	while (endl[i] != '\n')
	{
		if (endl[i] == '\0')
			return (0);
		i++;
	}
	tmp = &endl[i];
	*tmp = '\0';
	*line = ft_strdup(*str);
	*str = ft_strdup(tmp + 1);
	free(endl);
	return (1);
}

static int	ft_read_file(int fd, char *buff, char **str, char **line)
{
	int		ret;
	char	*tmp;

	while ((ret = read(fd, buff, BUFF_SIZE)) > 0)
	{
		buff[ret] = '\0';
		if (*str)
		{
			tmp = *str;
			*str = ft_strjoin(tmp, buff);
			free(tmp);
			tmp = NULL;
		}
		else
			*str = ft_strdup(buff);
		if (ft_end_line(str, line) == 1)
			return (1);
	}
	return (0);
}

int			get_next_line(int const fd, char **line)
{
	static char	*str[2147483647];
	char		*buff;
	int			ret;
	int			i;

	if (line == NULL || fd < 0 || \
			fd > 2147483647 || (read(fd, str[fd], 0) < 0) \
			|| !(buff = (char *)malloc(sizeof(char) * BUFF_SIZE + 1)))
		return (-1);
	if (str[fd] && ft_end_line(&str[fd], line))
		return (1);
	i = 0;
	ft_bzero(buff, BUFF_SIZE + 1);
	ret = ft_read_file(fd, buff, &str[fd], line);
	free(buff);
	if (ret != 0 || str[fd] == NULL || str[fd][0] == '\0')
		return (ret);
	*line = str[fd];
	str[fd] = NULL;
	free(str[fd]);
	return (1);
}
