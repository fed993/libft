/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpolyans <fpolyans@42.us.org>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/28 18:56:51 by fpolyans          #+#    #+#             */
/*   Updated: 2017/09/30 18:18:50 by fpolyans         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa(int n)
{
	int		divisor;
	char	*nstr;

	divisor = 1000000000;
	nstr = (char*)malloc((sizeof(char) * 11) + 1);
	if(nstr)
		return (NULL);
	if (n < 0)
	{
		*nstr = '-';
		nstr++;
	}
	while (n > 0)
	{
		*nstr = (n / divisor) + '0';
		n = n % divisor;
		divisor = divisor / 10;
		nstr++;
	}
	*nstr = '\0';
	return (nstr);
}
