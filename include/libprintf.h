/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libprintf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thmusik <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 13:17:53 by thmusik           #+#    #+#             */
/*   Updated: 2022/10/25 20:17:47 by thmusik          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBPRINTF_H
# define LIBPRINTF_H

# include <stdarg.h>

unsigned int	ft_doprint(const char *format, va_list datalist);

void	ft_formatprint(register char formatindex,
			unsigned int outputlenght, va_list datalist);

int		ft_printf(const char *format, ...);

int		ft_putchar(char c);

int		ft_putstring(char *s);

#endif
