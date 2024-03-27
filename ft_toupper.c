/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pamatya <pamatya@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/11 20:41:06 by pamatya           #+#    #+#             */
/*   Updated: 2024/03/20 20:42:00 by pamatya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int c)
{
	unsigned char	letter;

	letter = (unsigned char)c;
	if (letter >= 'a' && letter <= 'z')
		c -= 32;
	return (c);
}

// #include <unistd.h>
// #include <stdio.h>

// int main (void)
// {
// 	char	a;

// 	a = 'l';
// 	write(1, &a, 1);
// 	write(1, "\n", 1);
// 	printf("%c\n", ft_toupper(a));

// 	return (0);
// }
