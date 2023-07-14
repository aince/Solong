/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aince <aince@student.42kocaeli.com.tr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/22 17:10:25 by aince             #+#    #+#             */
/*   Updated: 2022/12/22 17:11:19 by aince            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int c)
{
	return (c >= 0 && c < 128);
}
// #include <stdio.h>
// int main()
// {
// 	printf("%d", ft_isascii(' '));
// }
// Fonksiyona girilen parametrenin ascii değer aralığında 
// olup olmadığını döndürür. (0 veya 1 şeklinde)