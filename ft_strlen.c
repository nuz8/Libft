/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pamatya <pamatya@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/07 12:39:45 by pamatya           #+#    #+#             */
/*   Updated: 2024/03/20 20:31:22 by pamatya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *str)
{
	size_t	len;

	len = 0;
	while (*str++)
		len++;
	return (len);
}

// #include <string.h>
// #include <stdio.h>

// int	main(void)
// {
// 	char	*str;

// 	str = "Hello world! \nD0 you know\t how old I @m?";
// 	printf("C function:		%lu\n", strlen(str));
// 	printf("Libft funciton:	%lu\n", ft_strlen(str));
// 	printf("Delta = %lu\n", strlen(str) - ft_strlen(str));
// 	return (0);
// }
