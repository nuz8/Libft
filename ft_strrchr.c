/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pamatya <pamatya@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 15:15:49 by pamatya           #+#    #+#             */
/*   Updated: 2024/03/20 20:36:00 by pamatya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	char			*s;
	unsigned char	letter;
	int				len;
	int				counter;

	s = (char *)str;
	letter = (unsigned char)c;
	len = 0;
	while (*s)
	{
		len++;
		s++;
	}
	counter = 0;
	while (counter <= len)
	{
		if (*s == letter)
			return (s);
		s--;
		counter++;
	}
	return (NULL);
}

// #include <unistd.h>
// #include <stdio.h>
// #include <string.h>

// int main (void)
// {
// 	char	*str;
// 	char	c;

// 	strcpy(str, "Do you C it Cece?");

// 	// // Test 1
// 	// c = 'C';

// 	// write(1, str, 50);
// 	// write(1, "\n", 1);

// 	// printf("C fn:	%s\n", strrchr(str, c));
// 	// printf("Libft:	%s\n", ft_strrchr(str, c));

// 	// write(1, str, 50);
// 	// write(1, "\n", 1);

// 	// // Test 2
// 	// c = 'c';

// 	// write(1, str, 50);
// 	// write(1, "\n", 1);

// 	// printf("C fn:	%s\n", strrchr(str, c));
// 	// printf("Libft:	%s\n", ft_strrchr(str, c));

// 	// write(1, str, 50);
// 	// write(1, "\n", 1);

// 	// // Test 3
// 	// c = '\0';

// 	// write(1, str, 50);
// 	// write(1, "\n", 1);

// 	// printf("C fn:	%s\n", strrchr(str, c));
// 	// printf("Libft:	%s\n", ft_strrchr(str, c));

// 	// write(1, str, 50);
// 	// write(1, "\n", 1);

// 	// Test 4
// 	c = 's';

// 	write(1, str, 50);
// 	write(1, "\n", 1);

// 	printf("C fn:	%s\n", strrchr(str, c));
// 	printf("Libft:	%s\n", ft_strrchr(str, c));

// 	write(1, str, 50);
// 	write(1, "\n", 1);

// 	return (0);
// }
