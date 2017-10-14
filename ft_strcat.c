/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpolyans <fpolyans@42.us.org>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/13 17:30:15 by fpolyans          #+#    #+#             */
/*   Updated: 2017/10/13 17:51:45 by fpolyans         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcat(char *dest, const char *src)
{
	int		strsize;
	int		dest_size;
	int		src_size;
	int		i;
	char	*newstr;

	dest_size = ft_strlen(dest);
	src_size = ft_strlen(src);
	strsize = (dest_size + src_size);
	i = 0;
	newstr = (char*)malloc(sizeof(char) + strsize + 1);
	while (i < dest_size)
	{
		*newstr = *dest;
		newstr++;
		dest++;
	}
	while (i < src_size)
	{
		*newstr = *src;
		newstr++;
		dest++;
	}
	return (newstr);
}
