/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reader.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpoblon <gpoblon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/03 11:24:16 by gpoblon           #+#    #+#             */
/*   Updated: 2016/11/03 11:31:58 by gpoblon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef READER_H
# define READER_H

# include <sys/types.h>
# include <sys/uio.h>
# include <fcntl.h>
# include <unistd.h>

# define BUF_SIZE 4096

void	reader(char *name);
int		ft_strlen(char *str);
void	ft_putstr_fd(char *str, int fd);

#endif
