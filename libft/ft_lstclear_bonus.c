/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alirola- <alirola-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 15:09:04 by alirola-          #+#    #+#             */
/*   Updated: 2023/05/04 15:13:00 by alirola-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*act;

	if (!lst || !del)
		return ;
	while ((*lst))
	{
		del((*lst)->content);
		act = *lst;
		*lst = act->next;
		free(act);
	}
	*lst = 0;
}
