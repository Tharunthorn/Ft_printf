/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putudecimal.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thmusik <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/29 22:38:46 by thmusik           #+#    #+#             */
/*   Updated: 2022/10/30 21:11:00 by thmusik          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"
#include "../include/ft_printf.h"

unsigned int	ft_uintlen(unsigned	int n)
{
	int	len;

	len = 0;
	while (n > 0)
	{
		len++;
		n = n / 10;
	}
	return (len);
}

char	*ft_uitoa(unsigned int n)
{
	char	*number;
	unsigned int	len;

	len = ft_uintlen(n);
	number = (char *)malloc(sizeof(char) * (len + 1));
	if (!number)
		return (0);
	*(number +len) = '\0';
	while (n != 0)
	{
		*(number + len - 1) = n % 10 + 48;
		n = n / 10;
		len--;
	}
	return (number);
}

int	ft_putudecimal(unsigned int n)
{
	unsigned int	len;
	char	*number;

	if (n == 0)
		len = write(1, "0", 1);
	else
	{
		number = ft_uitoa(n);
		ft_putstr_fd(number, 1);
		len = ft_strlen(number);
		free(number);
	}
	return (len);
}
