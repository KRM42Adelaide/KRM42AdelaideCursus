#include "libft.h"

/*
ft_strchr searches for the first occurrence of the character c (an 
unsigned char) in the string pointed to by the argument str.
    -> str is the C string to be scanned
    -> c is the character to be searched in str
Return value:
    -> returns a POINTER to the first occurence of the characater c in the string
    -> returns NULL if the character is not found
*/

char    *ft_strchr(const char *str, int c)
{   
    int i;
    
    while(str[i] != '\0')
    {
        if (str[i] == c)
        {
            return ((char *)str[i]);
            i++;
        }
    }
    if (c == '\0')
        return ((char *)str[i]);
    return (0);
}
