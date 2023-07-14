/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aince <aince@student.42kocaeli.com.tr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/19 15:22:43 by aince             #+#    #+#             */
/*   Updated: 2022/12/22 17:13:18 by aince            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n && (s1[i] != '\0' || s2[i] != '\0'))
	{
		if (s1[i] != s2[i])
			return ((unsigned char)s1[i] - (unsigned char)s2[i]);
		i++;
	}
	return (0);
}
// #include <stdio.h>
// int main()
// {
// 	char a[] = "alperen";
// 	char b[] = "alpere";

// 	printf("%d", ft_strncmp(a, b, 7));
// }

// s1 parametresi ve s2 parametresi (iki string değeri)
// n değeri kadar karşılaştırılır.
// Aynı ise 0 değeri farklı ise 0'dan farklı bir değer girilir.
// NUll karakter gördüğü zaman durur.