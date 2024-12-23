/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gserafio <gserafio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 05:33:25 by gustavo-lin       #+#    #+#             */
/*   Updated: 2024/11/07 22:29:06 by gserafio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
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
	write(fd, "\n", 1);
}
