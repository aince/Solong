/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aince <aince@student.42kocaeli.com.tr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/09 11:16:11 by ahkalama          #+#    #+#             */
/*   Updated: 2022/12/19 15:35:50 by aince            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int c)
{
	return (c <= '9' && c >= '0');
}
// #include <stdio.h>
// int main()
// {
// 	printf("%d", ft_isdigit('3'));
// }
// Fonksiyona girilen parametrenin rakam 
// olup olmadığını döndürür.(0 veya 1 şeklinde)