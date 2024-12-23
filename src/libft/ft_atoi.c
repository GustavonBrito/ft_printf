/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gustavo-linux <gustavo-linux@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/13 17:35:55 by marvin            #+#    #+#             */
/*   Updated: 2024/10/21 23:15:20 by gustavo-lin      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(const char *nptr)
{
	int	index;
	int	sign;
	int	result;

	index = 0;
	sign = 1;
	result = 0;
	while ((nptr[index] >= 9 && nptr[index] <= 13) || nptr[index] == ' ')
	{
		index++;
	}
	if (nptr[index] == '+')
		index++;
	else if (nptr[index] == '-')
	{
		sign = -1 * sign;
		index++;
	}
	while (nptr[index] >= 48 && nptr[index] <= 57)
	{
		result = 10 * result + (nptr[index] - '0');
		index++;
	}
	return (result * sign);
}

// int	main(void)
// {
// 	char *int_to_convert = "\007 8";

// 	printf("%d\n", ft_atoi(int_to_convert));
// 	return (0);
// }