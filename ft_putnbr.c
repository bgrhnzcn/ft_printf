/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: buozcan <buozcan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/28 14:36:22 by buozcan           #+#    #+#             */
/*   Updated: 2023/10/28 21:32:02 by buozcan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr(long nb)
{
	int	digit;

	digit = 0;
	if (nb < 0)
	{
		digit += ft_putchar('-');
		nb = -nb;
		digit += ft_putnbr(nb);
	}
	else if (nb > 9)
	{
		digit += ft_putnbr(nb / 10);
		nb = nb % 10;
		digit += ft_putchar(48 + nb);
	}
	else
		digit += ft_putchar(48 + nb);
	return (digit);
}
