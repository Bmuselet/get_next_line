/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmuselet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/08 14:17:07 by bmuselet          #+#    #+#             */
/*   Updated: 2017/11/08 14:36:15 by bmuselet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalnum(int c)
{
	if (c < '0' || c > 'z')
		return (0);
	if (c > 'Z' && c < 'a')
		return (0);
	else if (c > '9' && c < 'A')
		return (0);
	return (1);
}
