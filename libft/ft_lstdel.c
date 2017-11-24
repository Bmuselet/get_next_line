/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmuselet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/10 16:25:55 by bmuselet          #+#    #+#             */
/*   Updated: 2017/11/10 16:51:41 by bmuselet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list	*tmp;
	t_list	*list;

	list = *alst;
	while (list != NULL)
	{
		tmp = list->next;
		del(list, list->content_size);
		list = tmp;
	}
	*alst = NULL;
}
