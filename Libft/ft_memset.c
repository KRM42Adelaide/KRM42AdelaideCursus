/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmachaka <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/04 12:23:34 by kmachaka          #+#    #+#             */
/*   Updated: 2022/07/04 14:31:13 by kmachaka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memset(void *b, int c, size_t len)
{
	size_t	i;

	i = 0;
	while (i < len)
	{
		((unsigned char *)b) [i] = c;
		i++;
	}
	return (b);
}
/*The C library function void *memset(void *str, int c, size_t n) 
copies the character c (an unsigned char) to the first n 
characters of the string pointed to, by the argument str.*/
