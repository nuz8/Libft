/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pamatya <pamatya@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/07 13:27:51 by pamatya           #+#    #+#             */
/*   Updated: 2024/03/20 19:49:21 by pamatya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *str, int c, size_t n)
{
	unsigned char	*new;

	new = str;
	while (n--)
		*new++ = (unsigned char)c;
	return (str);
}

// #include <string.h>
// #include <stdio.h>

// int	main(void)
// {
// 	char	str[50];
// 	char	str2[50];

// 	printf("\nTesting function: ft_memset\n");
// 	strcpy(str, "Are things different now?");
// 	strcpy(str2, str);
// 	printf("Original String:	%s\n", str);
// 	memset(str, 'W', 7);
// 	printf("After C function:	%s\n", str);
// 	ft_memset(str2, 'M', 7);
// 	printf("After Libft functn:	%s\n", str2);
// 	return (0);
// }
