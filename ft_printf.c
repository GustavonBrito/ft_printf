/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gserafio <gserafio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/22 18:10:22 by gustavo-lin       #+#    #+#             */
/*   Updated: 2024/12/29 11:20:00 by gserafio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	define_format(va_list va_list, int flag_definer)
{
	int	bytes_qty;

	bytes_qty = 0;
	if (flag_definer == 's')
		bytes_qty += ft_putstr_fd(va_arg(va_list, char *), 1);
	if (flag_definer == 'c')
		bytes_qty += ft_putchar_fd(va_arg(va_list, int), 1);
	if (flag_definer == 'p')
		bytes_qty += ft_putptr_fd(va_arg(va_list, uintptr_t), 1);
	if (flag_definer == 'd' || flag_definer == 'i')
		bytes_qty += ft_putnbr(va_arg(va_list, int));
	if (flag_definer == 'u')
		bytes_qty += ft_unsigned(va_arg(va_list, unsigned int));
	if (flag_definer == 'x' || flag_definer == 'X')
		bytes_qty += ft_to_hex(va_arg(va_list, unsigned int), 1, flag_definer);
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