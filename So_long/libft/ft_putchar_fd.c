/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aince <aince@student.42kocaeli.com.tr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/19 15:23:55 by aince             #+#    #+#             */
/*   Updated: 2022/12/22 17:10:44 by aince            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}
//#include <fcntl.h>
// int main()
// {
// 	int fd = open("/Users/aince/Desktop/alp.txt", O_RDWR | O_CREAT, 777);
// 	ft_putchar_fd('A',fd);
// }
// Belirtilen dosya tanimlayicisina (fd) c karakterini yazar.