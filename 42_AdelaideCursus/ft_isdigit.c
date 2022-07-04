#include <stdio.h>
/*
ft_isdigit checks whether a given argument is a digit 
    If argument is a digit:     1 is returned
    If argument is not a digit: 0 is returned

A single argument is passed to the function as a CHARACTER
but is taken into the function as an INTEGER argument
    -> (internally), the character is converted into the integer value
        corresponding to its ASCII value when passed.

Defined in <ctype.h>
*/
int ft_isdigit(int ch)
{
    if (ch >= '0' && ch <= '9')
    {
        return (1);
    }
    else
        return (0);
}
/*int main(void)
{
    char    ch;
    int retrn;

    printf("Enter a character: ");
    scanf("%c", &ch);

    retrn = ft_isdigit(ch);

    if (retrn == 1)
    {
        printf("Character: %c is a digit", ch);
    }
    else
        printf("Character: %c is not a digit", ch);

    return (0);
}*/