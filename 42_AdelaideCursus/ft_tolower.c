#include <stdio.h> 

int ft_tolower(int ch)
{
    if (ch >= 'A' && ch <='Z')
    {
        ch += 32;
        return (ch);
    }
    else
        return (ch);
}
/*int main(void)
{
    char ch;

    printf("Enter a character: ");
    scanf("%c", &ch);

    printf("%d", tolower(ch));

    return (0);
}*/