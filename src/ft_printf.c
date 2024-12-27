/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gustavo-linux <gustavo-linux@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/22 18:10:22 by gustavo-lin       #+#    #+#             */
/*   Updated: 2024/12/26 21:39:36 by gustavo-lin      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

int	define_format(va_list va_list, int flag_definer)
{
	int	bytes_qty;

	bytes_qty = 0;
	if (flag_definer == 's')
		bytes_qty += ft_putstr_fd(va_arg(va_list, char *), 1);
	if (flag_definer == 'c')
		bytes_qty += ft_putchar_fd(va_arg(va_list, int), 1);
	if (flag_definer == 'd' || flag_definer == 'i')
		bytes_qty += ft_putnbr_fd(va_arg(va_list, int), 1);
	if (flag_definer == 'p') // Imprime um ponteiro
		bytes_qty += ft_putptr_fd(va_arg(va_list, char *), 1);
	if (flag_definer == 'u') // Imprime um valor unsigned
		bytes_qty += ft_putstr_fd(va_arg(va_list, char *), 1);
	if (flag_definer == 'x' || flag_definer == 'X') //Imprime um inteiro em hexadecimal
		bytes_qty += ft_putstr_fd(va_arg(va_list, char *), 1);
	return (bytes_qty);
}

int	ft_printf(const char *char_array, ...)
{
	va_list	va_list;
	int		final_bytes;
	int		i;

	i = 0;
	final_bytes = 0;
	if (!char_array)
		return (-1);
	va_start(va_list, char_array);
	while (char_array[i])
	{
		if (char_array[i] == '%')
		{
			i++;
			if (char_array[i] == '%')
				final_bytes += ft_putchar_fd(char_array[i], 1);
			else
				final_bytes += define_format(va_list, char_array[i]);
		}
		else
			final_bytes += ft_putchar_fd(char_array[i], 1);
		i++;
	}
	va_end(va_list);
	return (final_bytes);
}

int	main(void)
{
	ft_printf(" NULL %s NULL ", NULL);
	//printf(" NULL %p NULL ", NULL);
	return (0);
}
