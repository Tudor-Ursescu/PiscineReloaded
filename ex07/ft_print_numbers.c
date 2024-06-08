/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tursescu <tursescu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/04 09:53:53 by tursescu          #+#    #+#             */
/*   Updated: 2024/06/07 09:11:13 by tursescu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <unistd.h>
// #include <stdio.h>
void	ft_putchar(char c);

void	ft_print_numbers(void)
{
	char	numbers;

	numbers = 48;
	while (numbers <= 57)
	{
		ft_putchar(numbers);
		numbers++;
	}
}

// int	main(void)
// {
// 	ft_print_numbers();
// 	return (0);
// }
