/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpolyans <fpolyans@42.us.org>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/22 03:54:54 by fpolyans          #+#    #+#             */
/*   Updated: 2017/09/22 03:56:49 by fpolyans         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncpy(char *dest, char *src, size_t len)
{
	int i;
	int b;

	i = 0;
	b = 0;
	while ((dest[i] = src[b]) != '\0' && (size_t)i < len)
	{
		i++;
		b++;
	}
	while ((ft_strlen(src) <= ft_strlen(dest)) && (size_t)i < len)
	{
		dest[i] = src[b];
		i++;
	}
	return (dest);
}
