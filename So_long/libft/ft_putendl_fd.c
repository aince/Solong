/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aince <aince@student.42kocaeli.com.tr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/19 15:23:51 by aince             #+#    #+#             */
/*   Updated: 2022/12/22 17:09:18 by aince            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	ft_putstr_fd(s, fd);
	write(fd, "\n", 1);
}
// #include <fcntl.h>
// #include <stdio.h>
// int main()
// {
// 	int fd = open("/Users/aince/Desktop/alp.txt" ,O_RDWR | O_CREAT, 777);
// 	ft_putendl_fd("Merhaba 42 Kocaeli",fd);
// 	printf("%d", fd);

// }
// s dizisini fd dosyasına yazar ve bir alt satıra geçer.
