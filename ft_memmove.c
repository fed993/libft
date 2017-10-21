/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpolyans <fpolyans@42.us.org>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/14 03:00:06 by fpolyans          #+#    #+#             */
/*   Updated: 2017/10/14 16:50:24 by fpolyans         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*s;
	char	*d;

	s = (char*)src;
	d = (char*)dst;
	while (len > 0)
	{
		if (dst >= src)
		{
			*(d) = *(s);
			d++;
			s++;
			len--;
		}
		else
		{
			*(d + (len - 1)) = *(s + (len - 1));
			len--;
		}
	}
	return (dst);
}
