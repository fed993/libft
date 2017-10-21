/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpolyans <fpolyans@42.us.org>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/14 19:58:51 by fpolyans          #+#    #+#             */
/*   Updated: 2017/10/14 20:02:03 by fpolyans         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*out;
	int		i;

	out = (char*)malloc((ft_strlen(s) * sizeof(char)) + 1);
	if (out)
	{
		i = 0;
		while(s[i])
		{
			out[i] = f(i, s[i]);
			i++;
		}
		out[i] = '\0';
	}
	return (out);
}
