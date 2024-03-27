/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pamatya <pamatya@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/09 18:16:02 by pamatya           #+#    #+#             */
/*   Updated: 2024/03/20 19:34:34 by pamatya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_bzero(void *str, size_t n)
{
	unsigned char	*new;

	if (n == 0)
		return (str);
	new = str;
	while (n--)
		*new ++ = (unsigned char) NULL;
	return (str);
}

// #include <strings.h>
// #include <stdio.h>
// #include <unistd.h>

// int	main(void)
// {
// 	char	str[50];
// 	char	str2[50];

// 	printf("\nTesting function: ft_bzero\n");
// 	strcpy(str, "Is it gone yet?");
// 	strcpy(str2, str);
// 	printf("Original String:	%s\n", str);

// 	bzero(str, 5);

// 	printf("C function:			%s\n", str);
// 	write(1, str, 19);
// 	write(1, "\n", 1);

// 	ft_bzero(str2, 5);

// 	printf("Libft functn:		%s\n", str2);
// 	write(1, str2, 19);
// 	write(1, "\n", 1);
// 	return (0);
// }
