/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tursescu <tursescu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/04 12:31:13 by tursescu          #+#    #+#             */
/*   Updated: 2024/06/04 16:25:54 by tursescu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int	ft_sqrt(int nb)
{
	int	sqr;

	sqr = 1;
	if (nb < 0)
		return (0);
	while (sqr <= nb / sqr)
	{
		if (sqr * sqr == nb)
			return (sqr);
		sqr++;
	}
	return (0);
}

// int main(void)
// {
// 	int nb = 9;
// 	printf("%d", ft_sqrt(nb));
// }