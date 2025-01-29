/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gserafio <gserafio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/25 21:11:02 by gustavo-lin       #+#    #+#             */
/*   Updated: 2024/12/29 11:20:06 by gserafio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include <stdint.h>

int		ft_putchar_fd(char c, int fd);
int		ft_putstr_fd(char *s, int fd);
int		ft_putptr_fd(uintptr_t n, int fd);
int		ft_putnbr(int n);
int		ft_unsigned(unsigned int n);
int		ft_to_hex(unsigned int n, int fd, int flag_definer);
int		ft_printf(const char *char_array, ...);

#endif