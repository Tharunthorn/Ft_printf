/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_doprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thmusik <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 13:23:49 by thmusik           #+#    #+#             */
/*   Updated: 2022/10/25 20:04:12 by thmusik          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"
#include "../include/libprintf.h"

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
		ft_formatprint(formatindex, outputlenght, datalist);
		formatindex = *++format;
	}
	return (outputlenght);
}
