/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstring.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thmusik <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 20:13:08 by thmusik           #+#    #+#             */
/*   Updated: 2022/10/25 20:16:47 by thmusik          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"
#include "../include/libprintf.h"

int	ft_putstring(char *s)
{
	int i;

	i = 0;
	if (!s)
		return (0);
	while (*(s + i))
	{
		ft_putchar_fd(*s, 1);
		i++;
	}
	return (i);
}
