/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_pointer.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: buozcan <buozcan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/28 17:04:58 by buozcan           #+#    #+#             */
/*   Updated: 2023/10/28 21:36:42 by buozcan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr_lhex(unsigned long nb, char is_lower)
{
	static int	digit;

	digit = 0;
	if (nb > 15)
	{
		ft_putnbr_lhex(nb / 16, is_lower);
		nb = nb % 16;
		digit += ft_puthex(nb, is_lower);
	}
	else
		digit += ft_puthex(nb, is_lower);
	return (digit);
}

int	ft_putnbr_pointer(void *p)
{
	long	adress;
	int		digit;

	digit = 2;
	adress = (long)p;
	ft_putstr("0x");
	digit += ft_putnbr_lhex(adress, 1);
	return (digit);
}
