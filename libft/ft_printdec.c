/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printdec.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alirola- <alirola-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/23 12:51:54 by alirola-          #+#    #+#             */
/*   Updated: 2023/05/25 16:28:29 by alirola-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		ft_printchar('-');
		ft_printchar('2');
		nb = 147483648;
	}
	if (nb < 0)
	{
		write(1, "-", 1);
		nb *= -1;
	}
	if (nb >= 0 && nb <= 9)
		ft_printchar(nb + '0');
	else
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
}

static int	ft_ncount(long int n)
{
	int	i;

	i = 0;
	while (n >= 10)
	{
		i++;
		n /= 10;
	}
	return (i + 1);
}

int	ft_printdec(int nb)
{
	long int	n;

	n = 0;
	ft_putnbr(nb);
	if (nb >= 0)
		return (ft_ncount(nb));
	n = (long int)nb * (-1);
	return (ft_ncount(n) + 1);
}
