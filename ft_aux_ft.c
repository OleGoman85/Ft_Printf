/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_aux_ft.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ogoman <ogoman@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/12 16:16:12 by ogoman            #+#    #+#             */
/*   Updated: 2023/11/12 16:16:26 by ogoman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

// Функция для преобразования числа в строку с указанной системой счисления
char	*ft_aux_pf(unsigned long long int n, int base)
{
	char	*str;
	char	*digits = "0123456789abcdef";
	int		digit_count;

	// Определение количества символов, необходимых для хранения числа
	digit_count = 1;
	while (n / base > 0)
	{
		digit_count++;
		n /= base;
	}

	// Выделение памяти под строку
	str = (char *)malloc((digit_count + 1) * sizeof(char));
	if (!str)
		return (NULL);

	// Заполнение строки числовыми символами, начиная с конца
	str[digit_count] = '\0';
	while (digit_count > 0)
	{
		digit_count--;
		str[digit_count] = digits[n % base];
		n /= base;
	}

	return (str);
}
