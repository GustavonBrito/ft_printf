/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gserafio <gserafio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/19 21:37:14 by gustavo-lin       #+#    #+#             */
/*   Updated: 2024/11/07 22:28:37 by gserafio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*s1_converted;
	const unsigned char	*s2_converted;
	unsigned int		i;

	i = 0;
	s1_converted = (const unsigned char *)s1;
	s2_converted = (const unsigned char *)s2;
	if (n == 0)
		return (0);
	while (i < n)
	{
		if (s1_converted[i] != s2_converted[i])
			return ((const unsigned int)(s1_converted[i] - s2_converted[i]));
		i++;
	}
	return (0);
}
