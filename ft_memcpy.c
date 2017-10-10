/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpolyans <fpolyans@42.us.org>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/09 12:54:54 by fpolyans          #+#    #+#             */
/*   Updated: 2017/10/10 16:00:58 by fpolyans         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *str1, const void *str2, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		((char*)str2)[i] = ((char*)str1)[i];
		i++;
	}
	return (str1);
}

int     main()
{
	char    *str1;
	char    *str2;
	char    buf[51];

	str1 = malloc(50);
	str2 = malloc(50);
	str1 = "sample text";
	str2 = ft_memcpy(buf, str1, 50);
	write(1, str2, sizeof(str2));
}
