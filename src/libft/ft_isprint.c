/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gustavo-linux <gustavo-linux@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 05:38:00 by marvin            #+#    #+#             */
/*   Updated: 2024/10/15 00:04:55 by gustavo-lin      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isprint(int c)
{
	if ((c >= 0 && c <= 31) || (c >= 127) || (c == -1))
		return (0);
	return (1);
}

/*int main(void)
{
	int i;

	char gustavo[] = "*,1aA\n";
	i = 0;
	while (gustavo[i]) {
		printf("meu %d", ft_isprint(gustavo[i]));
		printf("nativo %d\n", isprint(gustavo[i]));
		i++;
	}
	return (0);
}*/