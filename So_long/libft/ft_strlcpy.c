/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aince <aince@student.42kocaeli.com.tr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/19 15:23:03 by aince             #+#    #+#             */
/*   Updated: 2022/12/28 21:27:53 by aince            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t n)
{
	size_t	i;

	i = 0;
	if (n > 0)
	{
		while (i < (n - 1) && src[i])
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = '\0';
	}
	return (ft_strlen (src));
}
// #include <stdio.h>
// int main()
// {
// 	char a[] = "alperen";
// 	char b[] = "ince";

// 	printf("%zu", ft_strlcpy(a, b, 3));
// }

// Fonksiyon paremetresinde girilen n değeri kadar 
// src'yi dest'e kopyalar. ve src uzunluğunu döndürür.