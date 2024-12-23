/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gustavo-linux <gustavo-linux@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 11:01:27 by marvin            #+#    #+#             */
/*   Updated: 2024/10/21 20:23:03 by gustavo-lin      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(char *s, int c)
{
	int	i;
	int	flag;

	i = 0;
	flag = 0;
	if (c > 255)
		c = c % 256;
	while (s[i])
	{
		if (ft_isascii(s[i]) == 0)
			return (0);
		if (s[i] == c)
		{
			s = &s[i];
			i = 0;
			flag = 1;
		}
		i++;
	}
	if (flag == 1)
		return (s);
	if (c == 0)
		return (s = &s[i]);
	return (0);
}

// int	main(void)
// {
// 	char *hello = "tests";
// 	int a = 1024 + 'e';

// 	printf("%s", ft_strrchr(hello, a));
// 	//printf("%s", strrchr(hello, a));
// 	return (0);
// }