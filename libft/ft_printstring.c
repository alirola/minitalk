/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printstring.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alirola- <alirola-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/23 14:40:47 by alirola-          #+#    #+#             */
/*   Updated: 2023/05/25 16:28:29 by alirola-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printstring(char *str)
{
	int	i;

	i = 0;
	if (!str)
		return (ft_printstring("(null)"));
	while (str[i])
	{
		ft_printchar(str[i]);
		i++;
	}
	return (i);
}
