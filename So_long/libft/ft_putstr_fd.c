/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aince <aince@student.42kocaeli.com.tr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/19 15:23:39 by aince             #+#    #+#             */
/*   Updated: 2022/12/22 17:09:38 by aince            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	if (!s)
		return ;
	write(fd, s, ft_strlen(s));
}
// #include <fcntl.h>
// #include <stdio.h>
// int main()
// {
// 	int fd= open("/Users/aince/Desktop/text.txt",O_RDWR | O_CREAT, 777);
// 	ft_putstr_fd("alperen ince",fd);
// 	printf("%d",fd);
// }
// fd dosyasını s dizisini yazar.