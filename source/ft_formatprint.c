/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_formatprint.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thmusik <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 20:03:34 by thmusik           #+#    #+#             */
/*   Updated: 2022/10/25 20:10:43 by thmusik          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"
#include "../include/libprintf.h"

void	ft_formatprint(register char formatindex, unsigned int outputlenght, va_list datalist)
{
		if (formatindex == 'c')
			outputlenght += ft_putchar(va_arg(datalist, char *));
		else if (formatindex == 's')
			outputlenght += ft_putstring(va_arg(datalist, char *));
		else if (formatindex == 'p')
			outputlenght += ft_putpointer(va_arg(datalist, char *));
		else if (formatindex == 'd')
			outputlenght += ft_putdacimal(va_arg(datalist, int));
		else if (formatindex == 'i')
			outputlenght = ft_putinteger(va_arg(datalist, int));
		else if (formatindex == 'u')
			outputlenght = ft_putudecimal(va_arg(datalist, unsigned int));
		else if (formatindex == 'x')
			outputlenght = ft_puthexadecimal_l(va_arg(datalist, int));
		else if (formatindex == 'X')
			outputlenght = ft_puthexadecimal_u(va_arg(datalist, int));
		else if (formatindex == '%')
			outputlenght += ft_putchar('%');
}
