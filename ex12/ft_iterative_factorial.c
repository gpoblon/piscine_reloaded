/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpoblon <gpoblon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/02 15:58:14 by gpoblon           #+#    #+#             */
/*   Updated: 2016/11/03 13:25:24 by gpoblon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_factorial(int nb)
{
	int	result;

	result = 1;
	if (nb == 0)
		return (result);
	if (nb > 0 && nb < 13)
	{
		while (nb > 0)
		{
			result = nb * result;
			nb--;
		}
		return (result);
	}
	else
		return (0);
}
