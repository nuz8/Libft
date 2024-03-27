/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pamatya <pamatya@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 18:20:59 by pamatya           #+#    #+#             */
/*   Updated: 2024/03/27 13:40:53 by pamatya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const char *str1, const char *str2, size_t n)
{
	const char		*s1;
	const char		*s2;
	unsigned char	c1;
	unsigned char	c2;

	s1 = str1;
	s2 = str2;
	while (n)
	{
		c1 = (unsigned char)*s1;
		c2 = (unsigned char)*s2;
		if (c1 != c2)
			return (c1 - c2);
		s1++;
		s2++;
		n--;
	}
	return (0);
}

// #include <string.h>
// #include <unistd.h>

// int main (void)
// {
// 	char	str1[10];
// 	char	str2[10];

// 	// Test 1
// 	printf("C fn:	%d\n", memcmp("", "test", 1));
// 	printf("Libft:	%d\n", ft_memcmp("", "test", 1));

// 	write(1, "", 1);
// 	write(1, "\n", 1);
// 	write(1, "test", 1);
// 	write(1, "\n", 1);

// 	// // Test 2
// 	// strcpy(str1, "a");
// 	// strcpy(str2, "test");

// 	// write(1, str1, 1);
// 	// write(1, "\n", 1);
// 	// write(1, str2, 1);
// 	// write(1, "\n", 1);

// 	// printf("C fn:	%d\n", memcmp(str1, str2, 1));
// 	// printf("Libft:	%d\n", ft_memcmp(str1, str2, 1));

// 	return (0);
// }