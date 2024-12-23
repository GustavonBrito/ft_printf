/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gserafio <gserafio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/13 18:03:12 by marvin            #+#    #+#             */
/*   Updated: 2024/10/22 19:56:55 by gserafio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_tolower(int c)
{
	if (c >= 65 && c <= 90)
		return (c + 32);
	return (c);
}

/*int main(void)
{
	int i;

	char gustavo[] = "GUSTAVO";
	i = 0;
	while (gustavo[i]) {
		printf("%c", ft_tolower(gustavo[i]));
		i++;
	}
	return (0);
}*/