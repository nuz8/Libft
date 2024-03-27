/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pamatya <pamatya@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 19:45:27 by pamatya           #+#    #+#             */
/*   Updated: 2024/03/20 19:38:49 by pamatya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}

// #include <ctype.h>
// #include <stdio.h>

// int	main(void)
// {
// 	char	c;

// 	c = '6';
// 	printf("C function:		%d\n", isdigit(c));
// 	printf("Libft funciton:	%d\n", ft_isdigit(c));
// 	printf("Delta = %d\n", isdigit(c) - ft_isdigit(c));
// 	return (0);
// }