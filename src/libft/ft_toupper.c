/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gustavo-linux <gustavo-linux@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/13 17:37:11 by marvin            #+#    #+#             */
/*   Updated: 2024/10/15 00:10:31 by gustavo-lin      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_toupper(int c)
{
	if (c >= 97 && c <= 122)
		return (c - 32);
	return (c);
}

/*int main(void)
{
	int i;

	char gustavo[] = "ana paula serafio brito";
	i = 0;
	while (gustavo[i]) {
		printf("%c", ft_toupper(gustavo[i]));
		i++;
	}
	printf("\n");
	return (0);
}*/