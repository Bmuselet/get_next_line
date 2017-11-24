/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmuselet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/09 17:58:02 by bmuselet          #+#    #+#             */
/*   Updated: 2017/11/13 10:22:01 by bmuselet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t				i;
	const unsigned char	*tmp_s1;
	const unsigned char	*tmp_s2;

	if (s1 == s2 || n == 0)
		return (0);
	tmp_s1 = s1;
	tmp_s2 = s2;
	i = 0;
	while (n > 0)
	{
		if (tmp_s1[i] != tmp_s2[i])
			return (tmp_s1[i] - tmp_s2[i]);
		if (n)
		{
			i++;
			n--;
		}
	}
	return (0);
}
