/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmuselet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/10 11:01:50 by bmuselet          #+#    #+#             */
/*   Updated: 2017/11/13 15:56:57 by bmuselet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	char			*f_str;
	unsigned int	i;
	unsigned int	len;

	if (!s || !f)
		return (NULL);
	i = 0;
	len = ft_strlen(s);
	if (s != NULL && f != NULL)
	{
		f_str = (char *)malloc(sizeof(char) * (len + 1));
		if (f_str == NULL)
			return (NULL);
		while (s[i])
		{
			f_str[i] = f(s[i]);
			i++;
		}
		f_str[i] = '\0';
		return (f_str);
	}
	return (NULL);
}
