/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pamatya <pamatya@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 18:51:41 by pamatya           #+#    #+#             */
/*   Updated: 2024/03/20 19:52:06 by pamatya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	if (!s || !fd)
		return ;
	write(fd, s, ft_strlen(s));
}

// #include <fcntl.h>

// int main(void)
// {
// 	int		fd;
// 	char	s;

// 	fd = open("./Alt_versions/this.dict", O_RDWR);
// 	s = ft_strdup("This now!");
// 	ft_putchar_fd(s, fd);
// 	free(s);
// 	return (0);
// }
