/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: houatman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/19 16:22:32 by houatman          #+#    #+#             */
/*   Updated: 2020/09/19 16:39:37 by houatman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	unsigned int max;

	if (nb < 0)
	{
		max = ((unsigned int)(-1 * nb));
		ft_putchar('-');
	}
	else
	{
		max = ((unsigned int)nb);
	}
	if (max >= 10)
	{
		ft_putnbr(max / 10);
		ft_putnbr(max % 10);
	}
	else
	{
		ft_putchar(max + '0');
	}
}
