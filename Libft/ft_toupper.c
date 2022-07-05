/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmachaka <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/05 16:13:47 by kmachaka          #+#    #+#             */
/*   Updated: 2022/07/05 16:17:59 by kmachaka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int ft_toupper(int c)
{
    if (c >= 'a' && c <= 'z')
    {
        c -= 32;
        return (c);
    }
    else
        return (c);
}
/*int main(void)
{
    char c;

    printf("Enter a character: ");
    scanf("%c", &c);

    printf("%d", toupper(c));

    return (0);    
}*/
