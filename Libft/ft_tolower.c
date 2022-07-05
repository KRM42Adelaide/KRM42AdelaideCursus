/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmachaka <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/05 16:18:34 by kmachaka          #+#    #+#             */
/*   Updated: 2022/07/05 16:21:03 by kmachaka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h> 

int ft_tolower(int c)
{
    if (c >= 'A' && c <='Z')
    {
        c += 32;
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

    printf("%d", tolower(c));

    return (0);
}*/
