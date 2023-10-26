/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alirola- <alirola-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/22 17:20:16 by alirola-          #+#    #+#             */
/*   Updated: 2023/05/25 16:29:07 by alirola-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <unistd.h>
# include <stdarg.h>

int	ft_printchar(char c);
int	ft_printhexa(unsigned long long n, char c);
int	ft_printdec(int nb);
int	ft_printstring(char *str);
int	ft_printf(char const *content, ...);
int	ft_printunsigned(unsigned int uns);
int	ft_printptr(unsigned long long ptr);

#endif