/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gserafio <gserafio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 22:44:54 by gustavo-lin       #+#    #+#             */
/*   Updated: 2024/11/07 22:28:00 by gserafio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	unsigned char	*pointer_malloc;

	if (nmemb == 0 || size == 0)
		return (malloc(0));
	if (nmemb > (size_t)-1 / size)
		return (NULL);
	pointer_malloc = ((unsigned char *)(malloc(nmemb * size)));
	if (pointer_malloc == NULL)
		return (NULL);
	pointer_malloc = ft_memset(pointer_malloc, 0, nmemb * size);
	return (pointer_malloc);
}
