
#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	sleft;

	sleft = size;
	while (*dst && sleft > 0 && sleft--)
		dst++;
	while (*src && sleft > 1 && sleft--)
		*dst++ = *src++;
	if (sleft == 1)
		*dst = '\0';
	return (size - sleft);
}
