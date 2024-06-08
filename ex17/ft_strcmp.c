/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tursescu <tursescu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/04 14:17:38 by tursescu          #+#    #+#             */
/*   Updated: 2024/06/04 15:14:07 by tursescu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
// #include <string.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] == s2[i] && s1[i])
	{
		i++;
	}
	return (s1[i] - s2[i]);
}

// int main(void)
// {
// 	char	str1[] = "abcd";
// 	char	str2[] = "abCd";
// 	// char	str3[] = "abcd";
// 	int result;

// 	result = strcmp(str1, str2);
// 	printf("str1/str2: %d\n", result);
// 	result = ft_strcmp(str1, str2);
// 	printf("str2/str3: %d\n", result);
// }
