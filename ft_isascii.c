/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pamatya <pamatya@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 20:12:47 by pamatya           #+#    #+#             */
/*   Updated: 2024/03/20 19:38:32 by pamatya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
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
// 	printf("C function:		%d\n", isascii(c));
// 	printf("Libft funciton:	%d\n", ft_isascii(c));
// 	printf("Delta = %d\n", isascii(c) - ft_isascii(c));
// 	return (0);
// }