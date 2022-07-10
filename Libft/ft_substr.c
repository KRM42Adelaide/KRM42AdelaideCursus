#include "libft.h"

/*
ft_substr The substr() function returns the substring of a 
given string between two given indices. It returns the substring 
of the source string starting at the position m and ending at position n-1.
*/

char  *ft_substr(char const *s, unsigned int start, size_t len)
{
  char	*rtn;
	size_t	i;

	if (!s)
		return (NULL);
	if ((size_t)start > ft_strlen(s))
		return (ft_strdup(""));
	rtn = malloc(sizeof(char) * (len + 1));
	i = 0;
	if (!rtn)
		return (0);
	while (i < len)
	{
		rtn[i] = *(s + start + i);
		i++;
	}
	rtn[i] = '\0';
	return (rtn);
}
