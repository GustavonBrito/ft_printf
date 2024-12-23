/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gustavo-linux <gustavo-linux@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 15:38:22 by gustavo-lin       #+#    #+#             */
/*   Updated: 2024/10/27 22:48:00 by gustavo-lin      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// size_t	ft_strlen(const char *s)
// {
// 	size_t	s_length;

// 	s_length = 0;
// 	while (*s)
// 	{
// 		s_length++;
// 		s++;
// 	}
// 	return (s_length);
// }

// char	*ft_strcat(char *dest, const char *src)
// {
// 	int	i;
// 	int	dest_len;

// 	i = 0;
// 	dest_len = 0;
// 	while (dest[dest_len])
// 	{
// 		dest_len++;
// 	}
// 	while (src[i])
// 	{
// 		dest[dest_len + i] = src[i];
// 		i++;
// 	}
// 	return (dest);
// }

// void	*ft_strcpy(char *dest, const char *src)
// {
// 	int	i;

// 	i = 0;
// 	while (src[i])
// 	{
// 		dest[i] = src[i];
// 		i++;
// 	}
// 	return (dest);
// }

char	*ft_strjoin(char const *s1, char const *s2)
{
	unsigned int	k;
	unsigned int	i;
	unsigned int	j;
	char			*pointer_malloc;

	if (s1 && s2)
	{
		i = ft_strlen(s1);
		j = ft_strlen(s2);
		k = -1;
		pointer_malloc = (char *)malloc(sizeof(char) * (i + j + 1));
		if (pointer_malloc == ((void *)0))
			return ((void *)0);
		while (s1[++k])
			pointer_malloc[k] = s1[k];
		k = -1;
		while (s2[++k])
		{
			pointer_malloc[i] = s2[k];
			i++;
		}
		pointer_malloc[i] = '\0';
		return (pointer_malloc);
	}
	return ((void *)0);
}

// char	*ft_strjoin(char const *s1, char const *s2)
// {
// 	unsigned int	i;
// 	unsigned int	len1;
// 	unsigned int	len2;
// 	char			*str;

// 	if (s1 && s2)
// 	{
// 		len1 = ft_strlen(s1);
// 		len2 = ft_strlen(s2);
// 		str = (char *)malloc(sizeof(char) * (len1 + len2 + 1));
// 		if (str == NULL)
// 			return (NULL);
// 		i = -1;
// 		while (s1[++i])
// 			str[i] = s1[i];
// 		i = -1;
// 		while (s2[++i])
// 		{
// 			str[len1] = s2[i];
// 			len1++;
// 		}
// 		str[len1] = '\0';
// 		return (str);
// 	}
// 	return (NULL);
// }

// int	main(void)
// {
// 	char	s1[] = "lorem ipsum";
// 	char	s2[] = "dolor sit amet";
// 	char	*strjoin;

// 	strjoin = ft_strjoin(s1, s2);
// 	printf("%s", strjoin);
// 	return (0);
// }
// lorem ipsumdolor sit amet