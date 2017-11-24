/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmuselet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/08 18:25:06 by bmuselet          #+#    #+#             */
/*   Updated: 2017/11/13 17:52:32 by bmuselet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int i;

	i = 0;
	while (s[i] != '\0')
		i++;
	while (s[i] != s[0])
	{
		if (c == s[i])
			return ((char *)&s[i]);
		i--;
	}
	if (c == s[i])
		return ((char *)&s[i]);
	return (0);
}
