#include "libft.h"

/*
The C library function void *calloc(size_t nitems, size_t size) allocates 
the requested memory and returns a pointer to it. The difference in malloc 
and calloc is that malloc does not set the memory to zero where as calloc 
sets allocated memory to zero.
*/

void	*ft_calloc(size_t count, size_t size)
{
	void	*array;

	if (!(array = (char *)malloc(size * count)))
		return (NULL);
	return (ft_memset(array, 0, size * count));
}
