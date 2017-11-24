/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmuselet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/10 13:34:24 by bmuselet          #+#    #+#             */
/*   Updated: 2017/11/10 16:23:30 by bmuselet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	get_len(int n)
{
	int len;

	len = 1;
	if (n < 0)
	{
		len++;
		n = -n;
	}
	while (n > 9)
	{
		n = n / 10;
		len++;
	}
	return (len);
}

static char	*create_str(int len, int n, int neg, char *str)
{
	while (len >= 0)
	{
		str[len] = (n % 10) + 48;
		n = n / 10;
		len--;
	}
	if (neg < 0)
		str[0] = '-';
	return (str);
}

char		*ft_itoa(int n)
{
	char	*str;
	int		len;
	int		neg;

	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	neg = n;
	len = get_len(n);
	str = (char *)malloc(sizeof(char) * (len + 1));
	if (str == NULL)
		return (NULL);
	str[len] = '\0';
	len--;
	if (n < 0)
		n = -n;
	return (create_str(len, n, neg, str));
}
