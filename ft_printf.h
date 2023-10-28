/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: buozcan <buozcan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 18:51:37 by buozcan           #+#    #+#             */
/*   Updated: 2023/10/28 22:32:58 by buozcan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>

int		ft_printf(const char *str, ...);
void	ft_print_format(va_list arg, char c, int *len);
int		ft_putchar(int c);
int		ft_putstr(const char *str);
int		ft_putnbr(long nb);
int		ft_putunbr(unsigned long nb);
int		ft_puthex(unsigned char c, char is_lower);
int		ft_putnbr_hex(unsigned int nb, char is_lower);
int		ft_putnbr_lhex(unsigned long nb, char is_lower);
int		ft_putnbr_pointer(void *p);
size_t	ft_strlen(const char *str);
#endif
