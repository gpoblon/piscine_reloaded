/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpoblon <gpoblon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/02 16:25:18 by gpoblon           #+#    #+#             */
/*   Updated: 2016/11/03 11:59:13 by gpoblon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_recursive_factorial(int nb)
{
	int result;

	result = nb;
	if (nb == 0)
		return (1);
	if (nb < 0 || nb > 12)
		return (0);
	else
		result = result * ft_recursive_factorial(nb - 1);
	return (result);
}
