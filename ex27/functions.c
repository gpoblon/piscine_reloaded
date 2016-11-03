/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   functions.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpoblon <gpoblon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/03 11:20:16 by gpoblon           #+#    #+#             */
/*   Updated: 2016/11/03 13:30:29 by gpoblon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "reader.h"

int		ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		++i;
	return (i);
}

void	ft_putstr_fd(char *str, int fd)
{
	write(fd, str, ft_strlen(str));
}

int		main(int argc, char **argv)
{
	if (argc < 2)
	{
		ft_putstr_fd("File name missing.\n", 2);
		return (0);
	}
	if (argc > 2)
	{
		ft_putstr_fd("Too many arguments.\n", 2);
		return (0);
	}
	reader(argv[1]);
	return (0);
}

void	reader(char *name)
{
	int		fd;
	int		ret;
	char	buf[BUF_SIZE + 1];

	fd = open(name, O_RDONLY);
	if (fd == -1)
	{
		ft_putstr_fd("Failed to open file.\n", 2);
		return ;
	}
	ret = 1;
	while (ret)
	{
		ret = read(fd, buf, BUF_SIZE);
		buf[ret] = '\0';
		ft_putstr_fd(buf, 1);
	}
	if (close(fd) == -1)
	{
		ft_putstr_fd("Failed to close file.\n", 2);
		return ;
	}
}
