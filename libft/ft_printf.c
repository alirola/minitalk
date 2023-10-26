/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alirola- <alirola-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/24 14:57:01 by alirola-          #+#    #+#             */
/*   Updated: 2023/05/25 16:28:29 by alirola-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdarg.h>

static int	ft_filter(char const *content, int i, va_list *args)
{
	int	counter;

	counter = 0;
	if (content[i] == 'c')
		counter += ft_printchar(va_arg(*args, int));
	if (content[i] == 's')
		counter += ft_printstring(va_arg(*args, char *));
	if (content[i] == 'p')
		counter += ft_printptr(va_arg(*args, unsigned long long));
	if (content[i] == 'd' || content[i] == 'i')
		counter += ft_printdec(va_arg(*args, int));
	if (content[i] == 'u')
		counter += ft_printunsigned(va_arg(*args, unsigned int));
	if (content[i] == 'x' || content[i] == 'X')
		counter += ft_printhexa(va_arg(*args, unsigned int), content[i]);
	if (content[i] == '%')
		counter += ft_printchar('%');
	return (counter);
}

int	ft_printf(char const *content, ...)
{
	va_list	args;
	int		i;
	int		c;

	i = 0;
	c = 0;
	va_start(args, content);
	while (content[i])
	{
		if (content[i] != '%')
			c += ft_printchar(content[i]);
		else
		{
			i++;
			c += ft_filter(content, i, &args);
		}
		i++;
	}
	va_end(args);
	return (c);
}
