/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fimachad <fimachad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/15 21:45:00 by fimachad          #+#    #+#             */
/*   Updated: 2022/06/15 23:11:11 by fimachad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*last;

	last = *lst;
	new->next = NULL;
	if (!(ft_lstsize(last)))
	{
		*last = new;
		return ;
	}
	while (last->next != NULL)
		last = last->next;
	last->next = new;
}
