/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pamatya <pamatya@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/10 19:19:50 by pamatya           #+#    #+#             */
/*   Updated: 2024/03/20 19:48:51 by pamatya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char		*d;
	const char	*s;

	d = dest;
	s = src;
	if (!(d || s))
		return (NULL);
	if (d < s)
	{
		while (n--)
			*d++ = *s++;
		return (dest);
	}
	else
	{
		d += n;
		s += n;
		while (n--)
			*(--d) = *(--s);
		return (dest);
	}
}

// #include <stdio.h>
// #include <unistd.h>
// #include <string.h>

// int	main(void)
// {
// 	// // Test 1
// 	// int	i;

// 	// i = 0;
// 	// while (i < 30)
// 	// {
// 	// 	char	src1[50];
// 	// 	char	dest1[50];
// 	// 	char	dest2[50];

// 	// 	strcpy(src1, "This is a sacred text.");

// 	// 	memmove(dest1, src1, i);
// 	// 	ft_memmove(dest2, src1, i);
// 	// 	printf("%d. C fn memmove:		%s\n", i, dest1);
// 	// 	printf("%d. Libft fn ft_memmove:	%s\n", i, dest2);
// 	// 	i++;
// 	// }

// 	// // Test 2
// 	// int	i;

// 	// write(1, "C fn memmove:\n", 13);
// 	// i = 0;
// 	// while (i < 30)
// 	// {
// 	// 	char	src1[50];
// 	// 	char	dest1[50];

// 	// 	strcpy(src1, "Copy this now! Do it!");
// 	// 	// strcpy(src1, "abcdefghi");

// 	// 	memmove(dest1, src1, i);
// 	// 	write(1, dest1, 50);
// 	// 	write(1, "\n", 1);
// 	// 	i++;
// 	// }

// 	// write(1, "\n", 1);

// 	// write(1, "Libft fn ft_memmove:\n", 20);
// 	// i = 0;
// 	// while (i < 30)
// 	// {
// 	// 	char	src1[50];
// 	// 	char	dest1[50];

// 	// 	strcpy(src1, "Copy this now! Do it!");
// 	// 	// strcpy(src1, "abcdefghi");

// 	// 	ft_memmove(dest1, src1, i);
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
// 	// printf("C fn:	%s\n", (memmove(&a[0], &b[0], 6)));
// 	// printf("Libft:	%s\n", (ft_memmove(&x[0], &y[0], 6)));

// 	// // // Test 3.2
// 	// // memmove(&a[0], &b[0], 6);
// 	// // ft_memmove(&x[0], &y[0], 6);
// 	// // write(1, a, 15);
// 	// // write(1, "\n", 1);
// 	// // write(1, x, 15);
// 	// // write(1, "\n", 1);

// 	// Test 4
// 	char	a[] = "abcdefghi";
// 	char	b[] = "abcdefghi";

// 	printf("C fn:	%s\n", (memmove(&a[2], &a[0], 6)));
// 	printf("Libft:	%s\n", (ft_memmove(&b[2], &b[0], 6)));

// 	return (0);
// }
