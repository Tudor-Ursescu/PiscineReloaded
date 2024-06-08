/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tursescu <tursescu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/04 18:13:31 by tursescu          #+#    #+#             */
/*   Updated: 2024/06/05 15:19:14 by tursescu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
// #include <stdio.h>

int	*ft_range(int min, int max)
{
	int	size;
	int	*range;
	int	i;

	i = 0;
	if (min >= max)
		return (NULL);
	size = max - min;
	range = (int *)malloc(sizeof(int) * size);
	if (range == NULL)
		return (NULL);
	while (i < size)
	{
		range[i] = min + i;
		i++;
	}
	return (range);
}
// int main() {
//     int min = 5;
//     int max = 10;
//     int *range = ft_range(min, max);
// 	int i;

// 	i = 0;
//     if (range) {
//         while (i < max - min) 
// 		{
//             printf("%d ", range[i]);
// 			i++;
//         }
//         printf("\n");

//         // Free the allocated memory
//         free(range);
//     } else {
//         printf("Invalid range or memory allocation failed.\n");
//     }

//     return 0;
// }