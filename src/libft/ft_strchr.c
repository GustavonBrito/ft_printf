/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gustavo-linux <gustavo-linux@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/19 02:07:56 by gustavo-lin       #+#    #+#             */
/*   Updated: 2024/10/30 20:19:26 by gustavo-lin      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strchr(char *s, int c)
{
	int	i;

	i = 0;
	if (c > 255)
		c = c % 256;
	while (s[i])
	{
		if (s[i] == c)
			return (s = &s[i]);
		i++;
	}
	if (c == 0)
		return (s = &s[i]);
	return (0);
}

// int	main(void)
// {
// 	// char *hello = "tests";
// 	// int a = 't';
// 	//char *result = ft_strchr("", 'a');
// 	//char *result = ft_strchr("Hello, World!", 'h');
// 	// char *result = ft_strchr("Hello, World!", '\0');
// 	//char *result = ft_strchr("Hello, \nWorld!", '\n');
// 	// char *result = ft_strchr("banana", 'a');
// 	//char *result = ft_strchr("Hello, World!", 'H');
// 	//char *result = strchr("Hello, World!", '!');
// 	//char *result = ft_strchr("aaaaabaaaaa", 'b');
// 	char *result = ft_strchr("teste", 'e' + 256);
// 	//char *result = strchr("teste", 1024);
// 	printf("%s", result);	
// 	return (0);
// }