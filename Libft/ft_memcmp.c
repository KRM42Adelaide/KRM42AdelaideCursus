#include "libft.h"

/*
The C library function int memcmp(const void *str1, const void *str2, size_t n) 
compares the first n bytes of memory area str1 and memory area str2.
*/

int ft_memcmp(const void *s1, const void *s2, size_t n)
{
  size_t  i;
  
  i = 0;
  while (i < n)
  {
    if (s1[i] != s2[i])
      return ((const unsigned char *)s1[i] 
        - (const unsigned char *)s2[i]);
    i++;
  }
  return (0);
}
