/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksaffron <ksaffron@student.21-schoo>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/05 19:06:05 by ksaffron          #+#    #+#             */
/*   Updated: 2021/09/05 20:25:44 by ksaffron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	b;

	i = 0;
	b = 0;
	while (dest[b] != '\0')
	{
		b++;
	}
	while (src[i] != '\0')
	{
		dest[b] = src[i];
		b++;
		i++;
	}
	dest[b] = '\0';
	return (dest);
}
