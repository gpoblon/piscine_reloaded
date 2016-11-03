/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpoblon <gpoblon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/03 10:23:03 by gpoblon           #+#    #+#             */
/*   Updated: 2016/11/03 10:33:22 by gpoblon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stdlib.h"

int		ft_strlen(char *s)
{
	int	len;

	len = 0;
	while (s[len])
		len++;
	return (len);
}

char	*ft_strdup(char *src)
{
	char	*s_dup;
	int		i;

	i = 0;
	s_dup = (char*)malloc(sizeof(char) * (ft_strlen(src) + 1));
	if (!s_dup)
		return (NULL);
	while (src[i] != '\0')
	{
		s_dup[i] = src[i];
		i++;
	}
	s_dup[i] = '\0';
	return (s_dup);
}
