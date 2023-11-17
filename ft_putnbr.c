/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: buozcan <buozcan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/28 14:36:22 by buozcan           #+#    #+#             */
/*   Updated: 2023/11/17 22:59:32 by buozcan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr(long nb)
{
	int	digit;
	int	check;

	digit = 0;
	if (nb < 0)
	{
		if (ft_putchar('-') == -1)
			return (-1);
		digit += 1;
		nb = -nb;
		check = ft_putnbr(nb);
		if (check == -1)
			return (-1);
		digit += check;
	}
	else if (nb > 9)
	{
		check = ft_putnbr(nb / 10);
		if (check == -1)
			return (-1);
		digit += check;
		nb = nb % 10;
		check = ft_putchar(48 + nb);
		if (check == -1)
			return (-1);
		digit += check;
	}
	else
	{
		check = ft_putchar(48 + nb);
		if (check == -1)
			return (-1);
		digit += check;
	}
	return (digit);
}
