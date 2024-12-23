/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gserafio <gserafio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 08:38:36 by gustavo-lin       #+#    #+#             */
/*   Updated: 2024/11/07 22:28:57 by gserafio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*s_unsigned;
	unsigned int	c_unsigned;
	unsigned int	i;

	s_unsigned = s;
	c_unsigned = c;
	i = 0;
	if (n == 0)
		return (s_unsigned);
	while (i < n)
	{
		s_unsigned[i] = c_unsigned;
		i++;
	}
	return (s_unsigned);
}
