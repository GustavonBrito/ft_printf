/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gustavo-linux <gustavo-linux@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/19 18:27:15 by gustavo-lin       #+#    #+#             */
/*   Updated: 2024/10/27 17:24:01 by gustavo-lin      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char	*s_converted;
	unsigned char		c_converted;
	unsigned int		i;

	i = 0;
	s_converted = (const unsigned char *)s;
	c_converted = (unsigned char)c;
	while (i < n)
	{
		if (s_converted[i] == c_converted)
			return ((unsigned char *)(s_converted = &s_converted[i]));
		i++;
	}
	return (0);
}

// int main(void)
// {
// 	char arr[] = "Hello, world!";
//     char *result = memchr(120, 123, 0);
// 	printf("%c", *result);
// 	return (0);
// }