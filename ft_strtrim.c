/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpolyans <fpolyans@42.us.org>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/22 00:57:13 by fpolyans          #+#    #+#             */
/*   Updated: 2017/09/28 18:48:34 by fpolyans         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	int		i;
	int		start;
	int		end;

	i = 0;
	while (s[i] != '\0')
	{
		if ((s[i] != ' ') || (s[i] != '\n') || (s[i] != '\t'))
		{
			start = i;
		}
		else
		{
			end = i;
		}
		i++;
	}
	return (ft_stricut(s, (size_t)start, (size_t)end));
}
