/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pamatya <pamatya@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 17:49:16 by pamatya           #+#    #+#             */
/*   Updated: 2024/03/21 15:44:25 by pamatya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *str, int c, size_t n)
{
	unsigned char	*s;
	unsigned char	character;

	s = (unsigned char *)str;
	character = (unsigned char)c;
	while (n)
	{
		if (*s == character)
			return ((void *)s);
		s++;
		n--;
	}
	return (NULL);
}

// #include <unistd.h>
// #include <stdio.h>
// #include <string.h>

// int main (void)
// {
// 	// char	*str;
// 	// char	c;
// 	// int		n;

// 	// // Test 1
// 	// strcpy(str, "Do you C it Cece?");
// 	// n = 11;
// 	// c = 'C';

// 	// write(1, str, 50);
// 	// write(1, "\n", 1);

// 	// printf("C fn:	%s\n", memchr(str, c, n));
// 	// printf("Libft:	%s\n", ft_memchr(str, c, n));

// 	// write(1, str, 50);
// 	// write(1, "\n", 1);

// 	// // Test 2
// 	// strcpy(str, "Do you C it Cece?");
// 	// n = 14;
// 	// c = 'c';

// 	// write(1, str, 50);
// 	// write(1, "\n", 1);

// 	// printf("C fn:	%s\n", memchr(str, c, n));
// 	// printf("Libft:	%s\n", ft_memchr(str, c, n));

// 	// write(1, str, 50);
// 	// write(1, "\n", 1);

// 	// // Test 3
// 	// strcpy(str, "Do you C it Cece?");
// 	// n = 18;
// 	// c = '\0';

// 	// write(1, str, 50);
// 	// write(1, "\n", 1);

// 	// printf("C fn:	%s\n", memchr(str, c, n));
// 	// printf("Libft:	%s\n", ft_memchr(str, c, n));

// 	// write(1, str, 50);
// 	// write(1, "\n", 1);

// 	// Test 4
// 	char	*str;
// 	char	c;
// 	int		n;
// 	strcpy(str, "Do you C it Cece?");
// 	n = 7;
// 	c = 'y';

// 	write(1, str, 50);
// 	write(1, "\n", 1);

// 	// printf("C fn:	%s\n", memchr(str, c, n));
// 	// printf("Libft:	%s\n", ft_memchr(str, c, n));

// 	memchr(str, 121(79): '\171', n));
// 	printf("C fn:	%s\n", memchr(str, 121(79): '\171', n));
// 	printf("Libft:	%s\n", ft_memchr(str, c, n));

// 	// // Test 5
// 	// int tab[7] = {-49, 49, 1, -1, 0, -2, 2};
// 	// int	i;
// 	// int cc = -1;
// 	// size_t	n = 7;

// 	// printf("C fn:	%s\n", memchr(tab, cc, n));
// 	// printf("Libft:	%s\n", ft_memchr(tab, cc, n));

// 	// i = 0;
// 	// while (i < 7)
// 	// {
// 	// 	printf("tab[%d] = %c\n", i, (unsigned char)tab[i]);
// 	// 	unsigned char a = (unsigned char)tab[i];
// 	// 	write(1, &a, 1);
// 	// 	write(1, "\n", 1);
// 	// 	i++;
// 	// }

// 	// write(1, str, 50);
// 	// write(1, "\n", 1);

// 	return (0);
// }
