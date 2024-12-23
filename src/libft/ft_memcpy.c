/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gserafio <gserafio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 21:03:55 by gserafio          #+#    #+#             */
/*   Updated: 2024/10/23 22:06:42 by gserafio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char		*dest_unsigned;
	const unsigned char	*src_unsigned;
	unsigned int		i;

	i = 0;
	dest_unsigned = dest;
	src_unsigned = src;
	if (dest == (void *)0 && src == (void *)0)
		return ((void *)0);
	while (i < n)
	{
		dest_unsigned[i] = src_unsigned[i];
		i++;
	}
	return ((unsigned char *)(dest_unsigned));
}

// int main(void)
// {
// 	ft_memcpy((void *)0, (void *)0, 2);
// 	return (0);
// }