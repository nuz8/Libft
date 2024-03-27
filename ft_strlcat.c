/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pamatya <pamatya@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/11 17:31:00 by pamatya           #+#    #+#             */
/*   Updated: 2024/03/22 17:35:54 by pamatya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t buffer)
{
	char	*d;
	size_t	len;

	len = ft_strlen(dest);
	if (len > buffer)
		return (ft_strlen(src) + buffer);
	d = dest + len;
	buffer -= len;
	return ((len + ft_strlcpy(d, src, buffer)));
}

// #include <string.h>
// #include <stdio.h>
// #include <unistd.h>

// int main	(void)
// {

// 	char	dest1[15];
// 	char	dest2[15];

// 	dest1[14] = 'a';
// 	dest2[14] = 'a';

// 	write(1, "\n", 1);
// 	printf("%zu\n", strlcat(dest2, "lorem ipsum dolor sit amet", 15));
// 	write(1, dest2, 15);
// 	write(1, "\n", 1);

// 	write(1, "\n", 1);
// 	printf("%zu\n", ft_strlcat(dest1, "lorem ipsum dolor sit amet", 15));
// 	write(1, dest1, 15);
// 	write(1, "\n", 1);

// 	return (0);
// }
