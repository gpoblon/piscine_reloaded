/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpoblon <gpoblon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/03 11:34:56 by gpoblon           #+#    #+#             */
/*   Updated: 2016/11/03 12:15:52 by gpoblon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	ft_putstr(char *str)
{
	while (*str)
		ft_putchar(*str++);
}

int		ft_strcmp(char *s1, char *s2)
{
	while (*s1 && *s2 && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}

void	ft_bubble_sort(int argc, char **arg)
{
	char	*tmp;
	int		not_sorted;
	int		i;

	not_sorted = 1;
	while (not_sorted)
	{
		not_sorted = 0;
		i = 1;
		while (i < argc - 1)
		{
			if (ft_strcmp(arg[i], arg[i + 1]) > 0)
			{
				tmp = arg[i];
				arg[i] = arg[i + 1];
				arg[i + 1] = tmp;
				not_sorted = 1;
			}
			i++;
		}
	}
}

int		main(int argc, char **argv)
{
	int	i;

	if (argc >= 2)
	{
		ft_bubble_sort(argc, argv);
		i = 1;
		while (i < argc)
		{
			ft_putstr(argv[i]);
			ft_putchar('\n');
			i++;
		}
	}
	return (0);
}
