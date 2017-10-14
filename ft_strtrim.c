
#include "libft.h"

char	*ft_strtrim(char const *s)
{
	char	*str;
	int		i;

	str = (char*)malloc(ft_strlen(s) * sizeof(char));
	if (str)
	{
		i = 0;
		while (*s)
		{
			if (*s != ' ' && *s != '\n' && *s != '\t')
				str[i++] = *s;
			s++;
		}
		str[i] = '\0';
	}
	return (str);
}
