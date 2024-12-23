/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gustavo-linux <gustavo-linux@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 05:22:41 by marvin            #+#    #+#             */
/*   Updated: 2024/10/14 23:46:36 by gustavo-lin      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalnum(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	if (c >= 48 && c <= 57)
		return (4);
	if (c >= 97 && c <= 122)
		return (2);
	return (0);
}

/*int main(void)
{
	int i;

	char gustavo[] = "G12356a '\n'\t";
	i = 0;
	while (gustavo[i]) {
		printf("meu %d", ft_isalnum(gustavo[i]));
		printf("nativo %d\n", isalnum(gustavo[i]));
		i++;
	}
	return (0);
}*/