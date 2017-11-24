/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmuselet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/09 16:22:34 by bmuselet          #+#    #+#             */
/*   Updated: 2017/11/13 16:13:36 by bmuselet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	const char	*tmp_src;
	char		*tmp_dst;

	tmp_src = (const char *)src;
	tmp_dst = (char *)dst;
	if (tmp_src < tmp_dst)
	{
		while (len--)
			tmp_dst[len] = tmp_src[len];
	}
	else
		ft_memcpy(tmp_dst, tmp_src, len);
	return (tmp_dst);
}
