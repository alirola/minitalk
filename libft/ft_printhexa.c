/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printhexa.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alirola- <alirola-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/22 17:51:01 by alirola-          #+#    #+#             */
/*   Updated: 2023/05/25 16:28:29 by alirola-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printhexa(unsigned long long n, char c)
{
	unsigned long long	count;

	count = 0;
	if (n >= 16)
		count += ft_printhexa(n / 16, c);
	if (c == 'x')
		ft_printchar("0123456789abcdef"[n % 16]);
	else if (c == 'X')
		ft_printchar("0123456789ABCDEF"[n % 16]);
	count++;
	return (count);
}
