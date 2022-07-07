#include "libft.h"

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
