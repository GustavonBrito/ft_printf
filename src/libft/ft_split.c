/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gustavo-linux <gustavo-linux@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 01:13:33 by gustavo-lin       #+#    #+#             */
/*   Updated: 2024/11/09 13:27:54 by gustavo-lin      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	unsigned int	i;
	unsigned int	src_size;

	src_size = 0;
	i = 0;
	while (src[i])
	{
		i++;
		src_size++;
	}
	if (size == 0)
		return (src_size);
	i = 0;
	while (src[i] && i < size - 1)
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (src_size);
}

static int	ft_count_words(const char *s, char c)
{
	int	count;
	int	i;

	count = 0;
	i = 0;
	while (s[i])
	{
		while (s[i] && s[i] == c)
			i++;
		if (s[i])
			count++;
		while (s[i] && s[i] != c)
			i++;
	}
	return (count);
}

static void	ft_free_split(char **array, int count)
{
	int	i;

	i = 0;
	while (i < count)
	{
		free(array[i]);
		i++;
	}
	free(array);
}

static int	ft_word_len(const char *s, char c)
{
	int	len;

	len = 0;
	while (s[len] && s[len] != c)
		len++;
	return (len);
}

static char	*ft_get_word(const char *s, char c)
{
	char	*word;
	int		len;

	len = ft_word_len(s, c);
	word = malloc(sizeof(char) * (len + 1));
	if (word == (void *)0)
		return (NULL);
	ft_strlcpy(word, s, len + 1);
	return (word);
}

char	**ft_split(char const *s, char c)
{
	char	**array;
	int		i;

	array = malloc(sizeof(char *) * (ft_count_words(s, c)));
	if (s == (void *)0 || array == (void *)0)
		return (NULL);
	i = 0;
	while (*s)
	{
		while (*s && *s == c)
			s++;
		if (!*s)
			break ;
		array[i] = ft_get_word(s, c);
		if (array[i] == (void *)0)
		{
			ft_free_split(array, i);
			return (NULL);
		}
		s += ft_word_len(s, c);
		i++;
	}
	array[i] = '\0';
	return (array);
}
int	main(void)
{
	char	**array;
	int		a;

	a = 0;
	array = ft_split("_Gustavo_Serafio_Correa", '_');
	while (array[a])
	{
		printf("%s ", array[a]);
		a++;
	}
}
