/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tursescu <tursescu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/07 12:59:57 by tursescu          #+#    #+#             */
/*   Updated: 2024/06/07 16:42:54 by tursescu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

int	main(int argc, char **argv)
{
	int		fd;
	char	buffer[1];

	fd = open(argv[1], O_RDONLY);
	if (argc > 2)
	{
		write(1, "Too many arguments.\n", 20);
		return (1);
	}
	else if (argc == 1)
	{
		write(1, "File name missing.\n", 19);
		return (1);
	}
	if (fd == -1)
	{
		write(1, "Cannot read file.\n", 18);
		return (1);
	}
	while (read(fd, buffer, 1) > 0)
	{
		write(1, buffer, 1);
	}
	close(fd);
	return (0);
}
