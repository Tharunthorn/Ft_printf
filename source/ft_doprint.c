/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_doprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thmusik <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 13:23:49 by thmusik           #+#    #+#             */
/*   Updated: 2022/10/30 20:21:54 by thmusik          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"
#include "../include/ft_printf.h"

unsigned int	ft_doprint(const char *format, va_list datalist)
{
	unsigned int	outputlenght;
	register char	formatindex;

	outputlenght = 0;
	formatindex = *format;
	while (formatindex != '\0')
	{
		if (formatindex != '%')
		{
			format++;
			outputlenght += ft_putchar(formatindex);
			formatindex = *format;
			continue;
		}
		formatindex = *++format;
		outputlenght += ft_formatprint(formatindex, datalist);
		if (formatindex != '%')
			va_arg(datalist, void *);
		formatindex = *++format;
	}
	return (outputlenght);
}
