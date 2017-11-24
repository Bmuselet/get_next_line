/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmuselet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/09 13:45:03 by bmuselet          #+#    #+#             */
/*   Updated: 2017/11/13 16:00:20 by bmuselet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	size_t			i;
	char			*ptr_b;
	unsigned char	tmp_char;

	i = 0;
	ptr_b = (char *)b;
	tmp_char = (unsigned char)c;
	while (i < len)
	{
		ptr_b[i] = tmp_char;
		i++;
	}
	return (b);
}
