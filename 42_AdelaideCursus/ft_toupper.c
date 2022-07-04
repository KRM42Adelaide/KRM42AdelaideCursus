#include <stdio.h>

int ft_toupper(int ch)
{
    if (ch >= 'a' && ch <= 'z')
    {
        ch -= 32;
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

    printf("%d", toupper(ch));

    return (0);    
}*/