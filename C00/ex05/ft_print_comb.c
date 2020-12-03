/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: houatman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/11 13:42:02 by houatman          #+#    #+#             */
/*   Updated: 2020/09/11 13:43:01 by houatman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_comb(void)
{
	char c;
	char d;
	char e;

	c = '0' - 1;
	while (c++ <= '6')
	{
		d = c;
		while (d++ <= '7')
		{
			e = d;
			while (e++ <= '8')
			{
				if (!(c == '0' && d == '1' && e == '2'))
				{
					ft_putchar(',');
					ft_putchar(' ');
				}
				ft_putchar(c);
				ft_putchar(d);
				ft_putchar(e);
			}
		}
	}
}
