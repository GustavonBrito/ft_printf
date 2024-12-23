/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/13 16:24:45 by marvin            #+#    #+#             */
/*   Updated: 2024/10/13 16:24:45 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int c)
{
	if (c >= 'a' && c <= 'z')
		return (2);
	if (c >= 'A' && c <= 'Z')
		return (1);
	return (0);
}

/* int main(void)
{
	int i;

	char gustavo[] = " naA";
	i = 0;
	while (gustavo[i]) {
		printf("ft %d\n", ft_isalpha(gustavo[i]));
		printf("nativa %d\n", isalpha(gustavo[i]));
		i++;
	}
	printf("\n");
	return (0);
} */