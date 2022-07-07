#include "libft.h"

char	*ft_strdup(const char *s)
{
	int c;
	char  *dest;

	c = 0;
	while (s[c])
		c += 1;
	if (!(dest = (char *)malloc(sizeof(char) * (c + 1))))
		return (NULL);
	c = -1;
	while (s[++c])
		dest[c] = s[c];
	dest[c] = '\0';
	return (dest);
}
