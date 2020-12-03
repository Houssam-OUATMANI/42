/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: houatman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/16 13:23:34 by houatman          #+#    #+#             */
/*   Updated: 2020/09/16 13:50:04 by houatman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	char *value;

	value = dest;
	while (*dest)
		dest++;
	while (nb--)
		if (!(*dest++ = *src++))
			return (value);
	*dest = '\0';
	return (value);
}
