#include "libft.h

/*
LIBRARY: N/A
SYNOPSIS: output string to given file with newline
DESCRIPTION:
Outputs the string ’s’ to the given file descriptor, followed by a
newline.
*/

void	ft_putendl_fd(char *s, int fd)
{
	if (s != NULL)
	{
		ft_putstr_fd(s, fd);
		ft_putchar_fd('\n', fd);
	}
}
