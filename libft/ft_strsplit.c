/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmuselet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/13 11:30:33 by bmuselet          #+#    #+#             */
/*   Updated: 2017/11/14 13:15:15 by bmuselet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_get_number_words(const char *str, char c)
{
	int	i;
	int	word;

	i = 0;
	word = 0;
	if (!str)
		return (0);
	while (str[i])
	{
		if (str[i] == c && str[i + 1] != c)
			word++;
		i++;
	}
	if (str[0] != '\0')
		word++;
	return (word);
}

static char	*ft_put_word(const char *str, char c, int *i)
{
	char	*s;
	int		v;

	if (!(s = (char *)malloc(sizeof(s) * (ft_strlen(str)))))
		return (NULL);
	v = 0;
	while (str[*i] != c && str[*i])
	{
		s[v] = str[*i];
		v++;
		*i += 1;
	}
	s[v] = '\0';
	while (str[*i] == c && str[*i])
		*i += 1;
	return (s);
}

char		**ft_strsplit(const char *s, char c)
{
	int		i;
	int		j;
	int		word;
	char	**str;

	if (!s)
		return (NULL);
	i = 0;
	j = 0;
	word = ft_get_number_words(s, c);
	if (!(str = (char **)malloc(sizeof(str) * (word + 2))))
		return (NULL);
	while (s[i] == c && s[i])
		i++;
	while (j < word && s[i])
	{
		str[j] = ft_put_word(s, c, &i);
		j++;
	}
	str[j] = NULL;
	return (str);
}
