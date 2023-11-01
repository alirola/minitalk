/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alirola- <alirola-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 16:19:52 by alirola-          #+#    #+#             */
/*   Updated: 2023/10/26 18:25:33 by alirola-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <signal.h>
#include "libft/libft.h"

void	rec_signal(int sigsent)
{
	static unsigned char	buff;
	static int				i;

	buff |= (sigsent == SIGUSR1);
	i++;
	if (i == 8)
	{
		ft_printf("%c", buff);
		i = 0;
		buff = 0;
	}
	else
		buff <<= 1;
}

int	main(void)
{
	ft_printf("El ID del cliente es: %i\n", getpid());
	signal(SIGUSR2, rec_signal);
	signal(SIGUSR1, rec_signal);
	while (1)
		pause ();
	return (0);
}
