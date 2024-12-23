/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gustavo-linux <gustavo-linux@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/13 18:11:08 by marvin            #+#    #+#             */
/*   Updated: 2024/10/29 23:09:17 by gustavo-lin      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *s)
{
	size_t	s_length;

	s_length = 0;
	while (*s)
	{
		s_length++;
		s++;
	}
	return (s_length);
}

// int	main(void)
// {
// 	char gustavo[] = "gustavo";

// 	printf("%ld", ft_strlen(gustavo));
// 	return (0);
// }