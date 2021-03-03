/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-cham <ade-cham@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/24 11:23:02 by ade-cham          #+#    #+#             */
/*   Updated: 2021/02/09 15:57:08 by ade-cham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

void	ft_flags_init (struct_flags *flags)
{
	flags->justified = 0;
	flags->width = 0;
	flags->precision = -1;
	flags->zero = 0
	flags->minus = 0;
}

int		ft_treat_format (va_list arg, const char *format, int counter)
{
	int				i;
	struct_flags	flags;

	i = 0;
	while (format[i])
	{
		if (format[i++] != '%')
		{
			ft_putchar(format[i])
			return (counter + i);
		}
		else if (format[i] == '%' && format[i + 1]
		{
			ft_flags_init(flags);
			if (flags->converter == 0)
				break
			if (ft_strchr("cspdiuxX%", format[i])
				ft_parsing_converter
		}
	}
	return (counter);
}

int		ft_printf(const char *format, ...)
{
	int		counter;
	va_list	arg;

	counter = 0;
	if (!format)
		return (-1);
	va_start(arg, format);
	i = ft_treat_format(arg, format, counter);
	va_end(arg);
	return (i);
}
