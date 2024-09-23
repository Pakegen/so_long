/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qacjl <qacjl@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/04 17:56:06 by qacjl             #+#    #+#             */
/*   Updated: 2024/06/04 18:17:01 by qacjl            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*i;

	if (*lst)
	{
		i = ft_lstlast(*lst);
		i->next = new;
	}
	else
		*lst = new;
}
	/*
	while(*lst != '\0')
	{
		if (!*lst)
		{
			new->next = *lst;
			*lst = new;
		}
		*lst = *lst->next;
	}*/
