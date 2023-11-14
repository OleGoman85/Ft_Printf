/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ogoman <ogoman@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 07:49:37 by ogoman            #+#    #+#             */
/*   Updated: 2023/11/14 14:56:51 by ogoman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <unistd.h>
# include <stdlib.h>
# include <stdarg.h>
# include <stdio.h>
# include <string.h>

int		ft_printf(char const *str, ...);
void	ft_putchar_ft(char c, size_t *counter);
int		ft_putstr_ft(char *str, size_t *counter);
void	ft_putptr_ft(void *ptr, size_t *counter);
void	ft_putnbr_ft(int num, size_t *counter);
void	ft_putuni_ft(unsigned int num, size_t *counter);

#endif
