/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pamatya <pamatya@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/10 19:53:35 by pamatya           #+#    #+#             */
/*   Updated: 2024/03/22 17:05:11 by pamatya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t dsize)
{
	char		*d;
	const char	*s;

	d = dest;
	s = src;
	if (dsize)
	{
		while (dsize > 1 && *s)
		{
			*d++ = *s++;
			dsize--;
		}
		*d = '\0';
	}
	return (ft_strlen(src));
}

// #include <string.h>
// #include <stdio.h>
// #include <unistd.h>

// int main	(void)
// {
// 	char	src[50];
// 	char	dest1[50];
// 	char	dest2[50];
// 	int		buff_size;
// 	int		ret1;
// 	int		ret2;

// 	write(1, "Testing fn: ft_strlcpy\n", 23);
// 	write(1, "Before:\n", 8);
// 	write(1, dest1, 50);
// 	write(1, "\n", 1);
// 	write(1, "$$$$", 4);
// 	write(1, "\n", 1);
// 	write(1, dest2, 50);
// 	write(1, "\n", 1);

// 	strcpy(src, "Did it really work?");
// 	buff_size = 21;
// 	ret1 = strlcpy(dest1, src, buff_size);
// 	ret2 = ft_strlcpy(dest2, src, buff_size);

// 	write(1, "After:\n", 7);
// 	write(1, dest1, 50);
// 	write(1, "\n", 1);
// 	printf("C fn strlcpy:	%s\n", dest1);
// 	printf("C fn return:	%d\n", ret1);

// 	write(1, dest2, 50);
// 	write(1, "\n", 1);
// 	printf("Libft strlcpy:	%s\n", dest2);
// 	printf("Libft return:	%d\n", ret2);

// 	return (0);
// }