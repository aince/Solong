/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aince <aince@student.42kocaeli.com.tr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/09 11:19:44 by ahkalama          #+#    #+#             */
/*   Updated: 2022/12/28 13:51:26 by aince            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *ptr, int c, size_t n)
{
	int				i;
	unsigned char	*s;

	s = (unsigned char *)ptr;
	i = 0;
	while (n > 0)
	{
		if (s[i] == (unsigned char)c)
			return (&s[i]);
		i++;
		n--;
	}
	return ((void *) NULL);
}
//#include <stdio.h>
// int main()
// {
// 	char a[] = "alperen";

// 	printf("%p", ft_memchr(a, 'e', 4));
// }
/* s dizisinde c parametresine girilen değeri bulana kadar indexlerde gezer 
 * ve c parametresini bulunca adresini döndürür. 
 * n değeri kadar arama yapar. */