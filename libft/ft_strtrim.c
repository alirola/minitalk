/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alirola- <alirola-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/27 13:14:07 by alirola-          #+#    #+#             */
/*   Updated: 2023/04/27 15:26:23 by alirola-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	count;
	size_t	count2;
	size_t	len;

	count = 0;
	len = ft_strlen(s1);
	count2 = len;
	if (!s1 || !set)
		return (0);
	if (*s1 == '\0' && len == 0)
		return (ft_strdup(""));
	while (ft_strchr(set, s1[count]))
		count++;
	while (ft_strrchr(set, s1[count2]))
		count2--;
	return (ft_substr(s1, count, count2 - count + 1));
}
