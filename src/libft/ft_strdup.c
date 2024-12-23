/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gserafio <gserafio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 00:51:17 by gustavo-lin       #+#    #+#             */
/*   Updated: 2024/11/07 22:30:27 by gserafio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	int		index;
	char	*string_dup;
	int		s_size;

	index = 0;
	s_size = 0;
	while (s[index])
	{
		index++;
		s_size++;
	}
	string_dup = (char *)malloc(s_size + 1 * sizeof(char));
	if (string_dup == (void *)0)
		return ((void *)0);
	index = 0;
	while (s[index])
	{
		string_dup[index] = s[index];
		index++;
	}
	string_dup[s_size] = '\0';
	return (string_dup);
}
