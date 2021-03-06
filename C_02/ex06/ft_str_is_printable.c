/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youcho <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/26 18:49:29 by youcho            #+#    #+#             */
/*   Updated: 2020/01/28 10:21:52 by youcho           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_str_is_printable(char *str)
{
	int i;

	i = 0;
	while (str[i] <= 126 && str[i] >= 32)
	{
		i++;
	}
	if (str[i] == '\0')
		return (1);
	else
	{
		return (0);
	}
}
