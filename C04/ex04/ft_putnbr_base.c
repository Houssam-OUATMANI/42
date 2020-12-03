/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: houatman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/20 18:48:57 by houatman          #+#    #+#             */
/*   Updated: 2020/09/22 12:33:46 by houatman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

int		ft_error(char *base)
{
	int i;
	int j;

	i = 0;
	if (base[i] == 0 || base[i + 1] == 0)
		return (0);
	while (base[i] != '\0')
	{
		if (base[i] == '+' || base[i] == '-' || base[i] <= 31)
			return (0);
		j = 1;
		while (base[j])
		{
			if (base[j] == base[j - 1])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	unsigned int i;
	unsigned int length;

	if (ft_error(base))
	{
		if (nbr < 0)
		{
			ft_putchar('-');
			i = (unsigned int)(-1 * nbr);
		}
		else
		{
			i = (unsigned int)nbr;
			length = ft_strlen(base);
		}
		if (i >= length)
		{
			ft_putnbr_base(i / length, base);
			ft_putnbr_base(i % length, base);
		}
		else
			write(1, i + base, 1);
	}
}
