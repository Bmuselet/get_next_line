/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmuselet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/10 11:58:13 by bmuselet          #+#    #+#             */
/*   Updated: 2017/11/14 18:14:06 by bmuselet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_nospace_len(char *s)
{
	size_t	i;
	size_t	space;
	size_t	len;

	len = ft_strlen(s);
	i = 0;
	while (s[i] == ' ' || s[i] == '\n' || s[i] == '\t')
		i++;
	space = i;
	if (s[i] != '\0')
	{
		i = len - 1;
		while (s[i] == ' ' || s[i] == '\n' || s[i] == '\t')
		{
			i--;
			space++;
		}
	}
	return (len - space);
}

char			*ft_strtrim(char const *s)
{
	char	*str;
	int		i;
	int		j;
	int		nospace_len;

	if (!s)
		return (NULL);
	i = 0;
	j = 0;
	nospace_len = ft_nospace_len((char *)s);
	str = (char *)malloc(sizeof(*str) * (nospace_len + 1));
	if (str == NULL)
		return (NULL);
	while (s[i] == ' ' || s[i] == '\n' || s[i] == '\t')
		i++;
	while (j < nospace_len)
	{
		str[j] = s[i];
		i++;
		j++;
	}
	str[j] = '\0';
	return (str);
}
