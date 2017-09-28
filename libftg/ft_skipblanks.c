/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_skipblanks.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpolyans <fpolyans@42.us.org>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/27 17:27:46 by fpolyans          #+#    #+#             */
/*   Updated: 2017/09/27 17:28:55 by fpolyans         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_skipblanks(char *s)
{
	while ((*s == '\t' ) || (*s == '\v') || (*s == '\f') || (*s == '\r')
			|| (*s == '\n') || (*s == ' '))
		s++;
	return (s);
}
