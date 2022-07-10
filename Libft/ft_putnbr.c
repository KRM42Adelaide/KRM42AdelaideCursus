/*
LIBRARY: N/A
SYNOPSIS: output integer to stdout
DESCRIPTION:
Outputs the integer ’n’ to stdout.
*/

#include "libft.h"

void	ft_putnbr(int n)
{
	if (n < 0)
	{
		ft_putchar('-');
		if (n == -2147483648)
		{
			ft_putchar('2');
			n = -147483648;
		}
		n *= -1;
	}
	if (n / 10)
		ft_putnbr(n / 10);
	ft_putchar(n % 10 + '0');
}
