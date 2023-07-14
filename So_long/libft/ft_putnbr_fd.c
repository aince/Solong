/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aince <aince@student.42kocaeli.com.tr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/19 15:23:46 by aince             #+#    #+#             */
/*   Updated: 2022/12/22 17:09:32 by aince            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	long	nb;

	nb = n;
	if (nb < 0)
	{
		ft_putchar_fd('-', fd);
		nb = (nb * -1);
	}
	if (nb < 10)
		ft_putchar_fd(nb + 48, fd);
	if (nb > 9)
	{
		ft_putnbr_fd(nb / 10, fd);
		ft_putnbr_fd(nb % 10, fd);
	}
}
// #include <fcntl.h>

// int main()
// {
// 	int fd = open("/Users/aince/Desktop/testt.txt", O_WRONLY | O_CREAT,777);
// 	ft_putstr_fd("Merhaba ",fd);
// 	ft_putnbr_fd(42,fd);
// 	ft_putstr_fd(" Kocaeli",fd);
// }

// n parametresine girilen int değeri fd dosyasına yazar.
