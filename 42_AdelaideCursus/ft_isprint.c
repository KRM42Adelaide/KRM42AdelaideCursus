#include <stdio.h>
/*
ft_isprint checks whether a given argument is a printable character
    If the argument is a printable character:       1 is returned
    If the argument is not a printable character:   0 is returned

A single argument is passed to the function as a CHARACTER
but is taken into the function as an INTEGER argument
    -> (internally), the character is converted into the integer value
        corresponding to its ASCII value when passed.

Defined in <ctype.h>
*/
int ft_isprint(int ch)
{
    if (ch >= 32 && ch <= 126)
    {
        return (1);
    }
    else
        return (0);
}
/*int main(void)
{
    char ch;
    int retrn;

    printf("Enter a character: ");
    scanf("%c", &ch);

    retrn = ft_isprint(ch);

    if (retrn == 1)
    {
        printf("Character: %c is printable", ch);
    }
    else 
        printf("Character: %c is not printable", ch);

    return (0);
}*/