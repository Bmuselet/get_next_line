/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmuselet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/09 17:26:44 by bmuselet          #+#    #+#             */
/*   Updated: 2017/11/13 18:36:30 by bmuselet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*ptr;
	unsigned char	tmp_c;

	i = 0;
	ptr = (unsigned char *)s;
	tmp_c = (unsigned char)c;
	while (n--)
	{
		if (ptr[i] == tmp_c)
			return (ptr + i);
		i++;
	}
	return (NULL);
}
