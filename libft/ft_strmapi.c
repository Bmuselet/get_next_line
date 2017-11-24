/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmuselet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/10 11:13:11 by bmuselet          #+#    #+#             */
/*   Updated: 2017/11/10 19:32:09 by bmuselet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*f_str;
	unsigned int	i;

	i = 0;
	if (s != NULL && f != NULL)
	{
		i = ft_strlen(s);
		f_str = (char *)malloc(sizeof(char) * (i + 1));
		if (f_str == NULL)
			return (NULL);
		i = 0;
		while (s[i])
		{
			f_str[i] = f(i, s[i]);
			i++;
		}
		f_str[i] = '\0';
		return (f_str);
	}
	return (NULL);
}
