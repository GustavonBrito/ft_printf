/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gustavo-linux <gustavo-linux@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 05:13:52 by gustavo-lin       #+#    #+#             */
/*   Updated: 2024/12/24 19:59:59 by gustavo-lin      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

void	ft_putstr_fd(char *s, int fd)
{
	int	a;

	a = 0;
	if (fd < 0)
		fd = -fd;
	if (s == (void *)0)
		return ;
	while (s[a])
	{
		write(fd, &s[a], 1);
		a++;
	}
}
