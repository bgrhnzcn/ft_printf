/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putunbr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: buozcan <buozcan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/28 17:34:23 by buozcan           #+#    #+#             */
/*   Updated: 2023/10/28 22:28:58 by buozcan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putunbr(unsigned long nb)
{
	int	digit;

	digit = 0;
	if (nb > 9)
	{
		digit += ft_putnbr(nb / 10);
		nb = nb % 10;
		digit += ft_putchar(48 + nb);
	}
	else
		digit += ft_putchar(48 + nb);
	return (digit);
}
