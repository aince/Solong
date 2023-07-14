/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aince <aince@student.42kocaeli.com.tr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/09 11:15:51 by ahkalama          #+#    #+#             */
/*   Updated: 2022/12/22 17:03:58 by aince            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
// int main()
// {
// 	printf("%d", ft_isalpha('-'));
// }
// Fonksiyona girilen parametrenin alfabetik karakter olup olmadığını döndürür.
// (0 veya 1 şeklinde)