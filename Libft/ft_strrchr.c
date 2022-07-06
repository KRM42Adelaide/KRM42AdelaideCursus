/*strrchr searches for the last occurence of the character c 
(an unsigned char) in the string pointed to, by the argument str.*/

#include <stddef.h>

char    *ft_strrchr(const char *s, int c)
{
  int		i;
	char	*ptr;

	i = 0;
	ptr = 0;
	while (s[i])
	{
		if (s[i] == c)
			ptr = (char *)(s + i);
		i++;
	}
	if (s[i] == c)
		ptr = (char *)(s + i);
	return (ptr);
}
