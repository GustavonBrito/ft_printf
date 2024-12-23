/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gserafio <gserafio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 22:44:54 by gustavo-lin       #+#    #+#             */
/*   Updated: 2024/10/22 19:56:12 by gserafio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	unsigned char	*pointer_malloc;

	if (nmemb * size > 2147483647)
		return (NULL);
	pointer_malloc = ((unsigned char *)(malloc(nmemb * size)));
	if (pointer_malloc == NULL)
		return (NULL);
	pointer_malloc = ft_memset(pointer_malloc, 0, nmemb * size);
	return (pointer_malloc);
}

// int	main(void)
// {
// 	int *p;

// 	p = calloc(2, sizeof(int));
// 	*p = 5000;
// 	return (0);
// }