/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thmusik <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 10:02:14 by thmusik           #+#    #+#             */
/*   Updated: 2022/10/30 20:22:02 by thmusik          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"
#include "../include/ft_printf.h"

int	ft_printf(const char *format, ...)
{
	va_list	datalist;
	unsigned int	outputlenght;

	va_start(datalist, format);
	outputlenght = ft_doprint(format, datalist);
	va_end(datalist);
	return (outputlenght);
}
