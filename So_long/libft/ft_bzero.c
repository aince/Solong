/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aince <aince@student.42kocaeli.com.tr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/09 11:54:18 by ahkalama          #+#    #+#             */
/*   Updated: 2022/12/22 17:03:48 by aince            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, '\0', n);
}

// int main()
// {
// 	char a[] = "alperen";

// 	ft_bzero(a, 3);
// 	write(1, &a, 8);
// }
// s dizisine n değeri kadar null değer atar.
// Command + Shift + 7 Yaparak Yorum Satırlarını Kaldırıp, Ekleyebiliriz.