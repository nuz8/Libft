/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pamatya <pamatya@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/10 00:38:29 by pamatya           #+#    #+#             */
/*   Updated: 2024/03/10 00:38:29 by pamatya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char		*d;
	const char	*s;

	d = dest;
	s = src;
	if (!(d || s))
		return (NULL);
	while (n--)
		*d++ = *s++;
	return (dest);
}

// #include <stdio.h>
// #include <unistd.h>
// #include <string.h>

// int	main(void)
// {
// 	// // Test 1
// 	// int		i;

// 	// i = 0;
// 	// while (i < 30)
// 	// {
// 	// 	char	src1[50];
// 	// 	char	dest1[50];
// 	// 	char	dest2[50];

// 	// 	strcpy(src1, "This is a sacred text.");

// 	// 	memcpy(dest1, src1, i);
// 	// 	ft_memcpy(dest2, src1, i);
// 	// 	printf("%d. C fn memcpy:		%s\n", i, dest1);
// 	// 	printf("%d. Libft fn memcpy:	%s\n", i, dest2);
// 	// 	i++;
// 	// }

// 	// // Test 2
// 	// int		i;
// 	// write(1, "C fn memcpy:\n", 13);
// 	// i = 0;
// 	// while (i < 30)
// 	// {
// 	// 	char	src1[50];
// 	// 	char	dest1[50];

// 	// 	strcpy(src1, "Copy this now! Do it!");
// 	// 	// strcpy(src1, "abcdefghi");

// 	// 	memcpy(dest1, src1, i);
// 	// 	write(1, dest1, 50);
// 	// 	write(1, "\n", 1);
// 	// 	i++;
// 	// }

// 	// write(1, "\n", 1);

// 	// write(1, "Libft fn ft_memcpy:\n", 20);
// 	// i = 0;
// 	// while (i < 30)
// 	// {
// 	// 	char	src1[50];
// 	// 	char	dest1[50];

// 	// 	strcpy(src1, "Copy this now! Do it!");
// 	// 	// strcpy(src1, "abcdefghi");

// 	// 	ft_memcpy(dest1, src1, i);
// 	// 	write(1, dest1, 50);
// 	// 	write(1, "\n", 1);
// 	// 	i++;
// 	// }

// 	// // Test 3
// 	// char	a[] = "abcdefghi";
// 	// char	b[] = "lmnopqrst";
// 	// char	x[] = "abcdefghi";
// 	// char	y[] = "lmnopqrst";

// 	// // Test 3.1
// 	// printf("C fn:	%s\n", (memcpy(&a[0], &b[0], 6)));
// 	// printf("Libft:	%s\n", (ft_memcpy(&x[0], &y[0], 6)));

// 	// // // Test 3.2
// 	// // memcpy(&a[0], &b[0], 6);
// 	// // ft_memcpy(&x[0], &y[0], 6);
// 	// // write(1, a, 15);
// 	// // write(1, "\n", 1);
// 	// // write(1, x, 15);
// 	// // write(1, "\n", 1);

// 	// // Test 4
// 	// char	a[] = "abcdefghi";
// 	// char	b[] = "abcdefghi";

// 	// printf("C fn:	%s\n", (memcpy(&a[2], &a[0], 6)));
// 	// printf("Libft:	%s\n", (ft_memcpy(&b[2], &b[0], 6)));

// 	// Test 5 (NULL test)

// 	// // Test 5.1
// 	// char	a[50];

// 	// strcpy(a, "this");
// 	// printf("C fn:	%s\n", (memcpy(a, (void *)0, 47)));
// 	// printf("Libft:	%s\n", (ft_memcpy(a, (void *)0, 47)));

// 	// Test 5.2
// 	printf("C fn:	%s\n", (memcpy((void *)0, (void *)0, 47)));
// 	printf("Libft:	%s\n", (ft_memcpy((void *)0, (void *)0, 47)));

// 	return (0);
// }
