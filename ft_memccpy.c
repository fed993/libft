/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpolyans <fpolyans@42.us.org>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/09 13:32:56 by fpolyans          #+#    #+#             */
/*   Updated: 2017/10/11 00:21:34 by fpolyans         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *str1, const void *str2, int c,  size_t n)
{
	size_t	i;

	i = 0;
	if (n == 0)
		return (NULL);
	while ((i < n) && (((char*)str2)[i] != c))
	{
		((char*)str1)[i] = ((char*)str2)[i];
		i++;
	}
	((char*)str1)[i] = ((char*)str2)[i];
	return (str1);
}

int     main()
{
	char src[] = "test basic du memccpy !";
	char buff1[22];
	
	__builtin___memset_chk (buff1, 0, sizeof(buff1), __builtin_object_size (buff1, 0));
	char *r1 = __builtin___memccpy_chk (buff1, src, 'm', 22, __builtin_object_size (buff1, 0));
	char *r2 = ft_memccpy(buff1, src, 'm', 22);
	if (r1 != r2)
	{
		write(1, "AAAAAAAAAAAAAAAAAA\n", sizeof("AAAAAAAAAAAAAAAAAA\n"));
		write(1, r1, sizeof(r1));
		write(1, "\n", sizeof("\n"));
		write(1, r2, sizeof(r2));
	}
	r1 = __builtin___memccpy_chk ("", src, 'm', 0, __builtin_object_size ("", 0));
	r2 = ft_memccpy("", src, 'm', 0);
	if (r1 != r2)
		write(1, "VVV", 3);
    return (0);
}
