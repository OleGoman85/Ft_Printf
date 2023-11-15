/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   proverka.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ogoman <ogoman@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/11 11:17:52 by ogoman            #+#    #+#             */
/*   Updated: 2023/11/15 16:37:59 by ogoman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	main(void)
{
	int		a;
	int		*ptr;

	ft_printf("oLeg\n");
	ft_printf("%c\n", 'v');
	ft_printf("%s\n", "stRing");
	ft_printf("%%\n");
	ft_printf("%d\n", -2147483648);
	ft_printf("%u\n", 65535);
	ft_printf("%x\n");

	a = 345;
	ptr = &a;
	ft_printf("Address: %p\n", ptr);
	return (0);
}
// make
// cc -Wall -Wextra -Werror proverka.c -L. -lftprintf -o proverka
// ./proverka
/*Флаг -L в команде компиляции указывает компилятору, где искать библиотеки во время линковки (сборки программы из объектных файлов). Аргумент, переданный после -L, представляет собой путь к каталогу, где компилятор должен искать библиотеки.

В вашем случае -L. означает, что компилятор должен искать библиотеку в текущем каталоге (где находится исполняемый файл), и -lftprintf указывает использовать библиотеку с именем libftprintf.a или libftprintf.so (в зависимости от того, какая у вас библиотека была скомпилирована).

Таким образом, комбинация -L. и -lftprintf говорит компилятору:

-L.: Ищи библиотеки в текущем каталоге.
-lftprintf: Используй библиотеку с именем libftprintf.a или libftprintf.so.
Это важно при компиляции программы, использующей стороннюю библиотеку, чтобы компилятор знал, где искать эту библиотеку во время линковки.*/



// #include <stdio.h>

// // Макрос для обертывания вызовов ft_printf с подсчетом символов
// #define MY_PRINTF(fmt, ...) do { \
//     int len = my_printf(fmt, ##__VA_ARGS__); \
//     counter += len; \
//     printf("Characters printed: %d\n", len); \
// } while (0)

// // Функция, которая возвращает количество символов, которые будут напечатаны
// int my_printf(const char *fmt, ...) {
//     va_list args;
//     va_start(args, fmt);
//     int len = vsnprintf(NULL, 0, fmt, args);
//     va_end(args);
//     return len;
// }

// int main(void)
// {
//     int a;
//     int *ptr;
//     int counter = 0;  // Добавлен счетчик

//     MY_PRINTF("oLeg\n");
//     MY_PRINTF("%c\n", 'v');
//     MY_PRINTF("%s\n", "stRing");
//     MY_PRINTF("%%\n");
//     MY_PRINTF("%d\n", -2147483648);
//     MY_PRINTF("%u\n", 65535);
//     MY_PRINTF("%x\n");

//     a = 345;
//     ptr = &a;
//     MY_PRINTF("Address: %p\n", ptr);

//     ft_printf("Total printf characters: %d\n", counter);  // Вывод общего количества символов
//     return (0);
// }
