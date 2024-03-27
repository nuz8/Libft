/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pamatya <pamatya@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 20:59:01 by pamatya           #+#    #+#             */
/*   Updated: 2024/03/20 19:39:05 by pamatya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
		return (1);
	else
		return (0);
}

// #include <ctype.h>
// #include <stdio.h>

// int	main(void)
// {
// 	char	c;

// 	c = 'K';
// 	printf("C function:		%d\n", isprint(c));
// 	printf("Libft funciton:	%d\n", ft_isprint(c));
// 	printf("Delta = %d\n", isprint(c) - ft_isprint(c));
// 	return (0);
// }
