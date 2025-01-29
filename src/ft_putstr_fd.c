/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gustavo-linux <gustavo-linux@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 05:13:52 by gustavo-lin       #+#    #+#             */
/*   Updated: 2024/12/27 12:22:55 by gustavo-lin      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putstr_fd(char *s, int fd)
{
	int	a;

	a = 0;
	if (!s)
	{
		write(fd, "(null)", 6);
		a = 6;
		return (a);
	}
	if (fd < 0)
		fd = -fd;
	while (s[a])
	{
		write(fd, &s[a], 1);
		a++;
	}
	return (a);
}
