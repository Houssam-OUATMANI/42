/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: houatman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/10 12:47:47 by houatman          #+#    #+#             */
/*   Updated: 2020/09/11 13:49:38 by houatman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

char	pre_numbers(char number, int bin)
{
	char ret;

	if (bin == 0)
	{
		ret = number % 10 + '0';
	}
	else
	{
		ret = number / 10 + '0';
	}
	return (ret);
}

void	ft_print_comb2(void)
{
	char first;
	char second;

	first = -1;
	while (first++ <= 98)
	{
		second = first;
		while (second++ <= 98)
		{
			if (!(first == 0 && second == 1))
			{
				ft_putchar(',');
				ft_putchar(' ');
			}
			ft_putchar(pre_numbers(first, 1));
			ft_putchar(pre_numbers(first, 0));
			ft_putchar(' ');
			ft_putchar(pre_numbers(second, 1));
			ft_putchar(pre_numbers(second, 0));
		}
	}
}
