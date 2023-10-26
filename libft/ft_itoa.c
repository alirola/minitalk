/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kali <alirola-@student.42malaga.com >      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/29 09:27:48 by kali              #+#    #+#             */
/*   Updated: 2023/04/29 10:05:09 by kali             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	numlen(long int n)
{
	size_t	i;

	i = 0;
	while (n >= 10)
	{
		n = n / 10;
		i++;
	}
	return (i + 1);
}

char	*ft_itoa(int n)
{
	char		*str;
	size_t		lon;
	long int	n2;

	n2 = n;
	if (n2 < 0)
		n2 = n2 * -1;
	lon = numlen(n2);
	if (n < 0)
		lon++;
	str = (char *)malloc(lon + 1);
	if (str == 0)
		return (0);
	str[lon--] = '\0';
	if (n2 == 0)
		str[0] = 48;
	while (n2 > 0)
	{
		str[lon--] = (n2 % 10) + 48;
		n2 = n2 / 10;
	}
	if (n < 0)
		str[0] = '-';
	return (str);
}
/*
int main(void)
{
	int n;

	n = -1234;
	printf("%s", ft_itoa(n));
	return (0);
}*/
