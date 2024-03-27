/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pamatya <pamatya@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 19:00:42 by pamatya           #+#    #+#             */
/*   Updated: 2024/03/20 19:50:50 by pamatya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	if (!s || !fd)
		return ;
	write(fd, s, ft_strlen(s));
	write(fd, "\n", 1);
}

// #include <fcntl.h>

// int main(void)
// {
// 	int		fd;
// 	char	*s;

// 	fd = open("./Alt_versions/this.dict", O_RDWR);
// 	s = ft_strdup("Write this!");
// 	ft_putchar_fd(s, fd);
// 	free(s);
// 	return (0);
// }