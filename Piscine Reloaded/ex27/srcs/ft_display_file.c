/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ycucchi <yoan066@yahoo.fr>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 11:03:49 by ycucchi           #+#    #+#             */
/*   Updated: 2021/11/04 14:32:08 by ycucchi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>

void	ft_display_file(int fd)
{
	char	*buffer;

	while (read(fd, &buffer, 1))
	{
		write(1, &buffer, 1);
	}
}

int	main(int argc, char **argv)
{
	int		fd;

	fd = open(argv[1], O_RDONLY);
	if (argc < 2)
		write(2, "File name missing.\n", 19);
	else if (argc > 2)
		write(2, "Too many arguments.\n", 20);
	else
	{
		if (fd == -1)
			write(2, "Cannot read file.\n", 18);
		else
			ft_display_file(fd);
	}
	close(fd);
	return (0);
}
