/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pamatya <pamatya@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/11 20:52:08 by pamatya           #+#    #+#             */
/*   Updated: 2024/03/20 20:40:07 by pamatya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int c)
{
	unsigned char	letter;

	letter = (unsigned char)c;
	if (letter >= 'A' && letter <= 'Z')
		c += 32;
	return (c);
}

// #include <unistd.h>
// #include <stdio.h>

// int main (void)
// {
// 	char	a;

// 	a = '*';
// 	write(1, &a, 1);
// 	write(1, "\n", 1);
// 	printf("%c\n", ft_tolower(a));

// 	return (0);
// }
