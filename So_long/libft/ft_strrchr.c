/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aince <aince@student.42kocaeli.com.tr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/19 15:22:34 by aince             #+#    #+#             */
/*   Updated: 2022/12/28 14:45:12 by aince            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;

	i = ft_strlen(s);
	while (i >= 0)
	{
		if (s[i] == (unsigned char)c)
			return ((char *)s + i);
		i--;
	}
	return (NULL);
}
// #include <stdio.h>
// int main()
// {
// 	char a[] = "alperen";
// 	printf("%s", ft_strrchr(a, 'p'));
// }
// Bulunan karakterden "c" itibaren sayar ve döndürür.
// strchr ile aynı sonucu verir.
// (Bu olayı tersten başlayarak yapar)