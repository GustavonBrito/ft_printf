/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gserafio <gserafio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/27 16:43:38 by gustavo-lin       #+#    #+#             */
/*   Updated: 2024/12/29 11:20:12 by gserafio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	write_func(int size_number, char number[], int fd)
{
	write (fd, "0x", 2);
	while (size_number - 1 >= 0)
	{
		write(fd, &number[size_number - 1], 1);
		size_number--;
	}
	return (size_number);
}

int	ft_putptr_fd(uintptr_t n, int fd)
{
	char			number_hex[16];
	int				size_number;
	int				result;
	int				bytes_counted;

	size_number = 0;
	bytes_counted = 2;
	if (!n)
	{
		write (fd, "(nil)", 5);
		return (5);
	}
	while (n > 0)
	{
		result = n % 16;
		if (result >= 0 && result <= 9)
			number_hex[size_number] = result + '0';
		else
			number_hex[size_number] = result - 10 + 'a';
		size_number++;
		n = n / 16;
	}
	return (write_func(size_number, number_hex, fd)
		, bytes_counted += size_number);
}
