/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alirola- <alirola-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/27 11:50:54 by alirola-          #+#    #+#             */
/*   Updated: 2023/04/27 12:30:26 by alirola-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(const char *s1, const char *s2)
{
	char	*s3;
	int		l1;
	int		l2;
	int		len;

	l1 = ft_strlen((char *)s1);
	l2 = ft_strlen((char *)s2);
	len = l1 + l2;
	s3 = malloc(len +1);
	if (!s3)
		return (0);
	ft_memcpy(s3, s1, l1);
	ft_memcpy(s3 + l1, s2, l2 +1);
	s3[len] = '\0';
	return (s3);
}
