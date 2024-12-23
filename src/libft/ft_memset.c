/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gustavo-linux <gustavo-linux@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 08:38:36 by gustavo-lin       #+#    #+#             */
/*   Updated: 2024/10/21 13:38:03 by gustavo-lin      ###   ########.fr       */
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

// int	main(void)
// {
// 	char src[] = "gustavoaaa";
// 	unsigned char *sla = ft_memset(src, 'g', 15);
// 	//unsigned char *sla1 = memset(src, 'g', 15);
// 	printf("%s\n", sla);
// 	//printf("%s\n", sla1);
// 	return (0);
// }