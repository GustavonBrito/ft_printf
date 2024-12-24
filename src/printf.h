/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gustavo-linux <gustavo-linux@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/22 17:18:25 by gustavo-lin       #+#    #+#             */
/*   Updated: 2024/12/24 19:59:30 by gustavo-lin      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF
# define FT_PRINTF

#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h>

void	ft_putchar_fd(char c, int fd);
void	ft_putstr_fd(char *s, int fd);

#endif