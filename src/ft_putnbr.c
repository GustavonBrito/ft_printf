/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gustavo-linux <gustavo-linux@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/25 23:42:40 by gustavo-lin       #+#    #+#             */
/*   Updated: 2024/12/27 13:23:09 by gustavo-lin      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	define_size_to_return(int number, int *size_to_return)
{
	*size_to_return = 0;
	if (number <= 0)
		*size_to_return += 1;
}

static int	check_int_limit(int limit, int *size_to_return)
{
	if (limit == -2147483648)
	{
		*size_to_return = 11;
		return (1);
	}
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

int	ft_putnbr(int n)
{
	char	number[11];
	int		size_number;
	int		result;
	int		size_to_return;

	size_number = 0;
	define_size_to_return(n, &size_to_return);
	if (check_int_limit(n, &size_to_return) == 1)
		write(1, "-2147483648", 11);
	else if (n < 0)
	{
		write(1, "-", 1);
		n = -n;
	}
	else if (n == 0)
		write(1, "0", 1);
	while (n > 0)
	{
		result = n % 10;
		number[size_number] = result + '0';
		n = n / 10;
		size_number++;
	}
	return (write_func(size_number, number, 1), size_to_return += size_number);
}
