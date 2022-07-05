/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmachaka <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/04 15:07:23 by kmachaka          #+#    #+#             */
/*   Updated: 2022/07/05 13:30:04 by kmachaka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* 
 * memmove copies n characters from src to dst
 * better option than memcpy when is comes to overlapping memory blocks
 * because it copies in a non-destructive way i.e. no overwrites take place
 * */

#include <stddef.h>

void    *ft_memmove(void *dst, const void *src, size_t len)
{
    size_t i;

	if (!dst && !src)
		return (0);
	i = 0;
	if ((size_t)dst - (size_t)src < len)
	{	
		i = len - 1;
    	while (i < len)
    	{
        	((unsigned char *)dst) [i] = ((unsigned char *)src) [i];
			i--;
    	}
	}
	else
	{
		while (i < len)
		{
			((unsigned char *)dst) [i] = ((unsigned char *)src) [i];
			i++;
		}
	}
	return (dst);
}
