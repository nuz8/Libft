/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pamatya <pamatya@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 15:39:09 by pamatya           #+#    #+#             */
/*   Updated: 2024/03/24 17:32:59 by pamatya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *str1, const char *str2, size_t n)
{
	unsigned char	*s1;
	unsigned char	*s2;

	s1 = (unsigned char *)str1;
	s2 = (unsigned char *)str2;
	while (n-- && (*s1 || *s2))
	{
		if (*s1 < *s2)
			return (-1);
		else if (*s2 < *s1)
			return (1);
		s1++;
		s2++;
	}
	return (0);
}

// #include <string.h>
// #include <unistd.h>

// // int main (void)
// {
// 	char	str1[50];
// 	char	str2[50];

// 	// // Test 1
// 	// printf("C fn:	%d\n", strncmp("", "test", 1));
// 	// printf("Libft:	%d\n", ft_strncmp("", "test", 1));

// 	// write(1, "", 1);
// 	// write(1, "\n", 1);
// 	// write(1, "test", 1);
// 	// write(1, "\n", 1);

// 	// // Test 2
// 	// strcpy(str1, "abcdefgh");
// 	// strcpy(str2, "abcdwxyz");

// 	// write(1, str1, 1);
// 	// write(1, "\n", 1);
// 	// write(1, str2, 1);
// 	// write(1, "\n", 1);

// 	// printf("C fn:	%d\n", strncmp(str1, str2, 5));
// 	// printf("Libft:	%d\n", ft_strncmp(str1, str2, 5));

// 	// // Test 3
// 	// printf("C fn:	%d\n", strncmp("test\005", "test\010", 6));
// 	// printf("Libft:	%d\n", ft_strncmp("test\005", "test\010", 6));

// 	// write(1, "", 1);
// 	// write(1, "\n", 1);
// 	// write(1, "test", 1);
// 	// write(1, "\n", 1);
// 	// write(1, "\005", 5);
// 	// write(1, "\n", 1);
// 	// write(1, "\010", 5);
// 	// write(1, "\n", 1);

// 	// Test 4
// 	strcpy(str1, "Hello! What is this place? I just came alive...");
// 	strcpy(str2, "is");
// 	printf("C fn:	%d\n", strncmp(str1, str2, 2));

// 	strcpy(str1, "is this place? I just came alive...");
// 	// strcpy(str2, "is");
// 	printf("C fn:	%d\n", strncmp(str1, str2, 2));

// 	return (0);
// }
