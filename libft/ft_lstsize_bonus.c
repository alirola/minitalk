/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alirola- <alirola-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 15:04:37 by alirola-          #+#    #+#             */
/*   Updated: 2023/05/04 12:44:52 by alirola-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int		i;
	t_list	*actual;

	if (!lst)
		return (0);
	i = 1;
	actual = lst;
	while (actual->next)
	{
		i++;
		actual = actual->next;
	}
	return (i);
}
