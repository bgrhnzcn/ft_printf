/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: buozcan <buozcan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 18:36:05 by buozcan           #+#    #+#             */
/*   Updated: 2023/10/28 22:27:57 by buozcan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_print_format(va_list arg, char c, int *len)
{
	if (c == 'c')
		*len += ft_putchar(va_arg(arg, int));
	else if (c == 's')
		*len += ft_putstr(va_arg(arg, char *));
	else if (c == 'p')
		*len += ft_putnbr_pointer(va_arg(arg, void *));
	else if (c == 'd' || c == 'i')
		*len += ft_putnbr(va_arg(arg, int));
	else if (c == 'u')
		*len += ft_putunbr(va_arg(arg, unsigned int));
	else if (c == 'x')
		*len += ft_putnbr_hex(va_arg(arg, int), 1);
	else if (c == 'X')
		*len += ft_putnbr_hex(va_arg(arg, int), 0);
	else if (c == '%')
		*len += ft_putchar('%');
}

int	ft_printf(const char *str, ...)
{
	int		len;
	va_list	arg;

	len = 0;
	va_start(arg, str);
	while (*str)
	{
		if (*str == '%')
		{
			ft_print_format(arg, *(str + 1), &len);
			str += 1;
		}
		else
			len += ft_putchar(*str);
		str++;
	}
	va_end(arg);
	return (len);
}
