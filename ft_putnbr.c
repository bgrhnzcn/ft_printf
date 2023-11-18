/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgrhnzcn <bgrhnzcn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/28 14:36:22 by buozcan           #+#    #+#             */
/*   Updated: 2023/11/19 00:56:55 by bgrhnzcn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_shorter_char(int *digit, long nb)
{
	int	check;

	check = ft_putnbr(nb);
	if (check == -1)
		return (-1);
	*digit += check;
	return (0);
}

static int	ft_shorter_num(int *digit, long nb)
{
	int	check;

	check = ft_putnbr(nb / 10);
	if (check == -1)
		return (-1);
	*digit += check;
	return (0);
}

int	ft_putnbr(long nb)
{
	int	digit;

	digit = 0;
	if (nb < 0)
	{
		if (ft_putchar('-') == -1)
			return (-1);
		digit += 1;
		nb = -nb;
		if (ft_shorter_char(&digit, nb))
			return (-1);
	}
	else if (nb > 9)
	{
		if (ft_shorter_num(&digit, nb))
			return (-1);
		nb = nb % 10;
		if (ft_shorter_char(&digit, nb))
			return (-1);
	}
	else
		if (ft_shorter_char(&digit, nb))
			return (-1);
	return (digit);
}
