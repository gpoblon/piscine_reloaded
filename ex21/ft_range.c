/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpoblon <gpoblon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/03 10:28:41 by gpoblon           #+#    #+#             */
/*   Updated: 2016/11/03 13:31:56 by gpoblon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int *str;
	int i;

	i = 0;
	if (min >= max)
		return (NULL);
	str = (int*)malloc(sizeof(int) * (max - min));
	if (!str)
		return (0);
	while (min + i < max)
	{
		str[i] = min + i;
		i++;
	}
	return (str);
}
