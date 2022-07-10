#include "libft.h"

/*
ft_memchr 
    -> searches for the first occurence of the character 
        c (an unsigned char) in the first n bytes of the string pointed to. 

This function returns a pointer to the matching byte or NULL
*/

void    *ft_memchr(const void *s, int c, size_t n)
{
    const char  *str;
    size_t  i;
    
    str = (const char *)s;
    i = 0;
    while (i < n)
    {
        if (str[i] == c)
            return ((void *)(s + 1)):
        i++;
    }
    return (0);
}
