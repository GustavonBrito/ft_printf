/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gustavo-linux <gustavo-linux@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/27 16:43:38 by gustavo-lin       #+#    #+#             */
/*   Updated: 2024/12/28 00:46:46 by gustavo-lin      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"
#include <stdio.h>

// static void	define_size_to_return(int number, int *bytes_counted)
// {
// 	*bytes_counted = 0;
// 	if (number <= 0)
// 		*bytes_counted += 1;
// }

// static int	check_int_limit(int limit, int *bytes_counted)
// {
// 	if (limit == -2147483648)
// 	{
// 		*bytes_counted = 11;
// 		return (1);
// 	}
// 	return (0);
// }

// static int	write_func(int size_number, char number[], int fd)
// {
// 	while (size_number - 1 >= 0)
// 	{
// 		write(fd, &number[size_number - 1], 1);
// 		size_number--;
// 	}
// 	return (size_number);
// }

int	ft_putptr_fd(unsigned long n, int fd)
{
	// char			number_hex[16];
	// int				size_number;
	// int				result;
	// int				bytes_counted;
	//char 			*str;
	//unsigned long	rest;
	
	//str = "0x";
	// printf("%ld\n", n);
	// printf("%ld", n / 16);
	// while (num_base_hex > 0x0)
	// {
	//  	num_base_hex = &num_base_hex+2 / 16;
	// 	printf("%ld", num_base_hex);
	// }
	// // size_number = 0
	// define_size_to_return(n, &bytes_counted);
	// if (check_int_limit(n, &bytes_counted) == 1)
	// 	write(1, "-2147483648", 11);
	// else if (n < 0)
	// {
	// 	write(1, "-", 1);
	// 	n = -n;
	// }
	// else if (n == 0)
	// 	write(1, "0", 1);
	// return (write_func(size_number, number, 1), bytes_counted += size_number);
	return (fd);
}


// int		ft_putptr(void *n, int fd)
// {
// 	int	bytes_count;

// 	bytes_count = 0;
// 	if (!n)
// 	{
// 		write (fd,"nil",3);
// 		return ;
// 	}
// 	if ()
// 	return (bytes_count);
// }