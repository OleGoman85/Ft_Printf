/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svesa <svesa@student.hive.fi>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 13:11:13 by svesa             #+#    #+#             */
/*   Updated: 2023/11/17 14:12:39 by svesa            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stdlib.h>
# include <unistd.h>

int	ft_printf(const char *str, ...);
int	ft_puthex(unsigned long int n, char conv);
int	ft_putptr(unsigned long int ptr);
int	ft_putnumber(long int n, char conv);
int	ft_putstring(char *str);
int	ft_putchar(char c);

#endif //FT_PRINTF_H
