/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gustavo-linux <gustavo-linux@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 04:33:26 by gustavo-lin       #+#    #+#             */
/*   Updated: 2024/11/07 04:47:41 by gustavo-lin      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int	a;

	a = 0;
	if (s == NULL || f == NULL)
		return ;
	while (s[a])
	{
		f(a, &s[a]);
		a++;
	}
}

// int main(void)
// {
// 	ft_striteri();
// 	return (0);
// }