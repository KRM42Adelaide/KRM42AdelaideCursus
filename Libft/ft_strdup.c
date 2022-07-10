#include "libft.h"

/*
The strdup() function returns a pointer to a new string which is
a duplicate of the string s.  Memory for the new string is
obtained with malloc(3), and can be freed with free(3).
*/

char	*ft_strdup(const char *s)
{
	char	*rtn;
	size_t	len;

	len = ft_strlen(s1) + 1;
	rtn = malloc(sizeof(char) * len);
	if (!rtn)
		return (0);
	rtn = ft_memcpy(rtn, s1, len);
	return (rtn);
}
