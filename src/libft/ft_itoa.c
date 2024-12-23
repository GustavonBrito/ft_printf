/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gustavo-linux <gustavo-linux@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/03 22:07:17 by gustavo-lin       #+#    #+#             */
/*   Updated: 2024/11/06 02:36:16 by gustavo-lin      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_convert_number(int n, char *buffer_converted, int digits_counted)
{
	int	temp_int;
	int	i;

	i = digits_counted;
	if (n < 0)
	{
		buffer_converted[0] = '-';
		n = -n;
	}
	if (n == 0)
		return (buffer_converted);
	temp_int = n % 10;
	ft_convert_number(n / 10, buffer_converted, i - 1);
	buffer_converted[i - 1] = temp_int + '0';
	return (buffer_converted);
}

static int	ft_count_digits(int n)
{
	int	i;

	i = 0;
	if (n == 0)
		i = 1;
	if (n < 0)
	{
		i = 1;
		n = -n;
	}
	while (n > 0)
	{
		n = n / 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	char	*buffer_converted;
	int		digits_counted;

	if (n == -2147483648)
	{
		buffer_converted = (char *)malloc(sizeof(char) * (11 + 1));
		if (buffer_converted == (void *)0)
			return ((void *)0);
		ft_strlcpy(buffer_converted, "-2147483648", 12);
		buffer_converted[11] = '\0';
		return (buffer_converted);
	}
	digits_counted = ft_count_digits(n);
	buffer_converted = (char *)malloc(sizeof(char) * (digits_counted + 1));
	if (buffer_converted == (void *)0)
		return ((void *)0);
	if (n == 0)
	{
		ft_strlcpy(buffer_converted, "0", 2);
		buffer_converted[1] = '\0';
		return (buffer_converted);
	}
	ft_convert_number(n, buffer_converted, digits_counted);
	buffer_converted[digits_counted] = '\0';
	return (buffer_converted);
}
