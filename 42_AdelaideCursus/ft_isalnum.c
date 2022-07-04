#include <stdio.h>
/*
ft_isalnum checks whether a given argument is an alphanumeric character
    If its an alphanumeric character:   1 is returned
    If neither:                         0 is returned

A single argument is passed on to the function as a CHARACTER 
but is taken into the function as an INTEGER argument.
    -> (internally)the charcter is converted into the integer value 
        corresponding to its ASCII value when passed.

Defined in the ctype.h header
*/
int ft_isalnum(int alnum)
{
    if ((alnum >= 'a' && alnum <= 'z') || 
        (alnum >= 'A' && alnum <= 'Z') ||
        (alnum >= 0 && alnum <= 9))
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

    retrn = ft_isalnum(ch);

    if (retrn == 1)
    {
        printf("Character: %c is either a number or a character", ch);
    }
    else
        printf("Character: %c is neither a number nor a character", ch);
    return (0);
}*/