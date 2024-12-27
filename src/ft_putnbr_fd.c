/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gustavo-linux <gustavo-linux@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/25 23:42:40 by gustavo-lin       #+#    #+#             */
/*   Updated: 2024/12/26 14:11:42 by gustavo-lin      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	check_int_limit(int limit)
{
	if (limit == -2147483648)
		return (1);
	return (0);
}

static int	write_func(int size_number, char number[], int fd)
{
	while (size_number - 1 >= 0)
	{
		write(fd, &number[size_number - 1], 1);
		size_number--;
	}
	return (size_number);
}

int	ft_putnbr_fd(int n, int fd)
{
	char	number[11];
	int		size_number;
	int		result;
	int		size_to_return;

	size_number = 0;
	if (fd < 0)
		fd = -fd;
	if (check_int_limit(n) == 1)
		write(fd, "-2147483648", 11);
	else if (n < 0)
	{
		write(fd, "-", 1);
		n = -n;
	}
	else if (n == 0)
		write(fd, "0", 1);
	while (n > 0)
	{
		result = n % 10;
		number[size_number] = result + '0';
		n = n / 10;
		size_number++;
	}
	return (write_func(size_number, number, fd), size_to_return = size_number);
}
