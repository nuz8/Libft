/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pamatya <pamatya@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 18:15:47 by pamatya           #+#    #+#             */
/*   Updated: 2024/03/20 19:51:19 by pamatya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	if (!fd)
		return ;
	write(fd, &c, 1);
}

// #include <fcntl.h>

// int main(void)
// {
// 	int		fd;
// 	char	c;

// 	fd = open("./Alt_versions/this.dict", O_RDWR);
// 	c = 'y';
// 	ft_putchar_fd(c, fd);
// 	return (0);
// }
