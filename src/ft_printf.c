/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gserafio <gserafio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/22 18:10:22 by gustavo-lin       #+#    #+#             */
/*   Updated: 2024/12/23 16:30:00 by gserafio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"
// #include <stdio.h>
// #include <unistd.h>

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
		}
		i++;
	}
	va_end(va_list);
	return (0);
}

int main(void)
{
	ft_printf("Gustavo", "Gustavo");
	return (0);
}