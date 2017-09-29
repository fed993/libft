/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stricut.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpolyans <fpolyans@42.us.org>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/22 03:12:18 by fpolyans          #+#    #+#             */
/*   Updated: 2017/09/28 18:50:10 by fpolyans         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_stricut(const char *src, size_t strt, size_t end)
{
	int		i;
	char	*out;

	i = 0;
	out = (char *)malloc((sizeof(char) * (end - strt)) + 1);
	if (!out)
		return (NULL);
	while (strt <= end)
	{
		out[i] = src[strt];
		i++;
	}
	return (out);
}
