/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpoblon <gpoblon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/02 17:50:56 by gpoblon           #+#    #+#             */
/*   Updated: 2016/11/02 18:19:18 by gpoblon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_putstr(char *str)
{
	while (*str)
	{
		ft_putchar(*str);
		++str;
	}
}

int		main(int ac, char **av)
{
	int i;

	i = 1;
	if (ac <= 1)
		return (0);
	while (i < ac)
	{
		ft_putstr(av[i++]);
		ft_putchar('\n');
	}
	return (0);
}
