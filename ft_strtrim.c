/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpolyans <fpolyans@42.us.org>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/25 20:14:00 by fpolyans          #+#    #+#             */
/*   Updated: 2017/10/13 20:20:22 by fpolyans         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	char	*str;
	int		i;

	str = (char*)malloc((ft_strlen(s) * sizeof(char)) + 1);
	if (str)
	{
		i = 0;
		while (*s)
		{
			if (*s != ' ' && *s != '\n' && *s != '\t')
			{
				i++;
				str[i] = *s;
			}
			s++;
		}
		str[i] = '\0';
	}
	return (str);
}
