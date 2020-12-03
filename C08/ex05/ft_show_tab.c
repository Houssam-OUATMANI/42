/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: houatman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/27 13:04:57 by houatman          #+#    #+#             */
/*   Updated: 2020/09/28 10:41:34 by houatman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "ft_stock_str.h"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (*str != 0)
	{
		ft_putchar(str[i]);
		str++;
	}
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

void	ft_show_tab(struct s_stock_str *par)
{
	int i;

	i = 0;
	while (par[i].str)
	{
		ft_putstr(par[i].str);
		ft_putchar('\n');
		ft_putnbr(par[i].size);
		ft_putchar('\n');
		ft_putstr(par[i].copy);
		ft_putchar('\n');
		i++;
	}
}
