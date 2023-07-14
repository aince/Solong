/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aince <aince@student.42kocaeli.com.tr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/09 11:16:29 by ahkalama          #+#    #+#             */
/*   Updated: 2022/12/28 20:49:49 by aince            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_numlen(int num)
{
	int	i;

	if (num == 0)
		return (1);
	i = 0;
	while (num > 0 || num < 0)
	{
		num /= 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	int		len;
	char	*arr;
	long	nbr;

	nbr = n;
	len = ft_numlen(nbr);
	if (n < 0)
	{
		len++;
		nbr *= -1;
	}
	arr = malloc(sizeof(char) * len + 1);
	if (!arr)
		return (NULL);
	arr[len] = '\0';
	while (nbr > 0)
	{
		arr[--len] = nbr % 10 + 48;
		nbr /= 10;
	}
	if (n < 0)
		arr[0] = '-';
	if (n == 0)
		arr[0] = '0';
	return (arr);
}
// #include <stdio.h>
// int main()
// {
// 	printf("%s", ft_itoa( -122));
// }