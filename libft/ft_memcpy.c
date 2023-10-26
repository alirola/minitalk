/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alirola- <alirola-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/22 13:11:18 by alirola-          #+#    #+#             */
/*   Updated: 2023/04/24 14:13:05 by alirola-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t				count;
	char				*dest;
	char				*srce;

	count = 0;
	dest = (char *)dst;
	srce = (char *)src;
	if (!src && !dst)
		return (0);
	while (count < n)
	{
		dest[count] = (char)srce[count];
		count++;
	}
	return (dst);
}
