/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alirola- <alirola-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 16:59:15 by alirola-          #+#    #+#             */
/*   Updated: 2023/10/26 18:35:10 by alirola-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"
#include <signal.h>

void	killing_function(int pid, unsigned char octet)
{
	int				i;
	unsigned char	octet_tmp;

	octet_tmp = octet;
	i = 8;
	while (i-- > 0)
	{
		octet_tmp = octet >> i;
		if (octet_tmp % 2 == 0)
			kill(pid, SIGUSR2);
		else
			kill(pid, SIGUSR1);
		usleep(100);
	}
}

int	main(int argc, char **argv)
{
	int		client_id;
	char	*str_to_send;
	int		i;

	if (argc != 3)
	{
		ft_printf("No hay suficientes parametros\n");
		return (0);
	}
	client_id = ft_atoi(argv[1]);
	str_to_send = argv[2];
	i = 0;
	while (str_to_send[i])
	{
		killing_function(client_id, (unsigned char)str_to_send[i]);
		i++;
	}
	ft_printf("Se han escrito %i caracteres\n", i);
	return (0);
}
