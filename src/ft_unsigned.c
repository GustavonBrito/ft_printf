/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_unsigned.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gustavo-linux <gustavo-linux@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/29 00:01:09 by gustavo-lin       #+#    #+#             */
/*   Updated: 2024/12/29 00:47:02 by gustavo-lin      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	write_func(int size_number, char number[], int fd)
{
	while (size_number - 1 >= 0)
	{
		write(fd, &number[size_number - 1], 1);
		size_number--;
	}
	return (size_number);
}

int	ft_unsigned(unsigned long long n)
{
	char	number[20];
	int		size_number;
	int		result;
	int		bytes_count;

	size_number = 0;
	bytes_count = 0;
	number[0] = '\0';
	if (n == 0)
	{
		write (1, "0", 1);
		bytes_count = 1;
	}
	while (n > 0)
	{
		result = n % 10;
		number[size_number] = result + '0';
		n = n / 10;
		size_number++;
	}
	return (write_func(size_number, number, 1), bytes_count += size_number);
}
