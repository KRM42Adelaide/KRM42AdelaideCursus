#include <stdio.h>
#include <stddef.h>
/*
ft_strlen finds to number of characters in a string and returns 
We use size_t because it will be big enough to contain 
the size of the biggest object our system can handle */
size_t ft_strlen(const char *str)
{
    size_t i;

    i = 0;
    while (str[i] != '\0')
    {
        i++;
    }
    return (i);
}
/*
int main(void)
{
    char *str;
    int strlen;

    str = "Kushinga";
    strlen = ft_strlen(str);

    printf("The number of characters in %s, is %d", str, strlen);

    return (0);
}*/