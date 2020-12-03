/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rabensou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/12 13:02:29 by rabensou          #+#    #+#             */
/*   Updated: 2020/09/13 17:35:40 by aumaalle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	ft_printline(int x)
{
	int a;

	a = 1;
	while (a <= x)
	{
		if (a == 1)
			ft_putchar('A');
		else if (a > 1 && a < x)
			ft_putchar('B');
		else if (a == x)
			ft_putchar('C');
		a++;
	}
}

void	printb(int x)
{
	int a;

	a = 1;
	while (a <= x)
	{
		if (a == 1 || a == x)
			ft_putchar('B');
		else
			ft_putchar(' ');
		a++;
	}
}

void	rush(int x, int y)
{
	int b;

	if (x <= 0 || y <= 0)
		return ;
	b = 1;
	while (b <= y)
	{
		if (b == 1 || b == y)
			ft_printline(x);
		else
			printb(x);
		b++;
		ft_putchar('\n');
	}
}
