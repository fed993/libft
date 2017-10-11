/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpolyans <fpolyans@42.us.org>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/28 18:56:51 by fpolyans          #+#    #+#             */
/*   Updated: 2017/10/05 12:52:13 by fpolyans         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_magnitude(int n)
{
	int		mag;

	mag = 0;
	if (n < 0)
		n = n * -1;
	while (n > 0)
	{
		n = n / 10;
		mag++;
	}
	return (mag);
}


char	*ft_itoa(int n)
{
	int		divisor;
	char	*nstr;

	divisor = 0;
	nstr = (char*)malloc((sizeof(char) * ft_magnitude(n)) + 1);
	if(!nstr)
		return (NULL);
	if (n < 0)
	{
		*nstr = '-';
		nstr++;
	}
	while (n > 0)
	{
		*nstr = (n / divisor) + '0';
		n = n % 10;
		divisor = divisor / 10;
		nstr++;
	}
	*nstr = '\0';
	return (nstr);
}
