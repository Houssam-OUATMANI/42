/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: houatman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/16 12:36:55 by houatman          #+#    #+#             */
/*   Updated: 2020/09/16 13:20:37 by houatman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	char *value;

	value = dest;
	while (*dest)
		dest++;
	while ((*dest = *src))
	{
		dest++;
		src++;
	}
	return (value);
}
