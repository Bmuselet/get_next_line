/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmuselet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/09 13:30:30 by bmuselet          #+#    #+#             */
/*   Updated: 2017/11/09 13:43:44 by bmuselet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*cpy;
	int		len;

	len = ft_strlen(s1);
	cpy = (char *)malloc(sizeof(char) * len + 1);
	if (cpy != NULL)
	{
		ft_strcpy(cpy, s1);
		return (cpy);
	}
	else
		return (0);
}
