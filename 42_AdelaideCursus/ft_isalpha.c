#include <stdio.h>
/*
ft_isalpha checks whether a given argument is an alphabet character
    If argument is an alphabet:     1 is returned
    If argument is not an alphabet: 0 is returned

A single argument is passed on to the function as a CHARACTER 
but is taken into the function as an INTEGER argument.
    -> (internally), the character is converted into the integer value 
        corresponding to its ASCII value when passed.

Defined in the <ctype.h> header file.
*/
int ft_isalpha(int ch)
{
    if ((ch >= 'a' && ch <= 'z') || 
        (ch >= 'A' && ch <= 'Z'))
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

    retrn = ft_isalpha(ch);

    if (retrn == 1)
    {
        printf("Character: %c is an alphabet", ch);
    }
    else
        printf("Character: %c is not an alphabet", ch);
    return (0);
}*/
