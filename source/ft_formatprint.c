/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_formatprint.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thmusik <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 20:03:34 by thmusik           #+#    #+#             */
/*   Updated: 2022/10/31 14:49:30 by thmusik          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"
#include "../include/ft_printf.h"

int	ft_formatprint(register char formatindex, va_list datalist)
{
	int outputlenght;

	outputlenght = 0;
	if (formatindex == 'c')
		outputlenght += ft_putchar(va_arg(datalist, int));
	else if (formatindex == 's')
		outputlenght += ft_putstring(va_arg(datalist, char *));
	else if (formatindex == 'p')
		outputlenght += ft_putpointer(va_arg(datalist, unsigned long long));
	else if (formatindex == 'd' || formatindex == 'i')
		outputlenght += ft_putdecimal(va_arg(datalist, int));
	else if (formatindex == 'u')
		outputlenght += ft_putudecimal(va_arg(datalist, unsigned int));
	else if (formatindex == 'x' || formatindex == 'X')
		outputlenght = ft_puthexadecimal(va_arg(datalist, unsigned int), formatindex);
	else if (formatindex == '%')
		outputlenght += ft_putchar('%');
	return (outputlenght);
}
