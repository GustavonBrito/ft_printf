/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gustavo-linux <gustavo-linux@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/22 18:10:22 by gustavo-lin       #+#    #+#             */
/*   Updated: 2024/12/24 20:00:29 by gustavo-lin      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int define_format(va_list va_list, int	flag_definer)
{
	if (flag_definer == 's')
		ft_putstr_fd(va_arg(va_list, char *), 1);
	return (0);	
}

int	ft_printf(const char *char_array, ...)
{
	va_list va_list;
	int	i;
	
	i = 0;
	if (!char_array)
		return -1;
	va_start(va_list, char_array);
	while (char_array[i])
	{
		if (char_array[i] == '%')
		{
			i++;
			if (char_array[i] == '%')
				ft_putchar_fd(char_array[i], 1);
			else
				define_format(va_list, char_array[i]);
		}
		i++;
	}
	va_end(va_list);
	return (0);
}

int main(void)
{
	ft_printf("%s, %s", "merda ", "serafio");
	return (0);
}