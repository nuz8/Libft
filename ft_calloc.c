/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pamatya <pamatya@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 19:23:08 by pamatya           #+#    #+#             */
/*   Updated: 2024/03/20 19:37:11 by pamatya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*ptr;
	char	*wrt;
	size_t	byts;

	byts = count * size;
	ptr = malloc(byts);
	if (!ptr)
		return (NULL);
	wrt = (char *)ptr;
	while (byts--)
		*wrt++ = '\0';
	return (ptr);
}

// int main (void)
// {
// 	int		count;
// 	int		size;
// 	char	*ptr;
// 	char	*ptr2;
// 	int		prod;

// 	count = 3;
// 	// size = 2;
// 	size = sizeof(char);
// 	prod = count * size;

// 	ptr = (char *)calloc(count, size);
// 	ptr2 = (char *)ft_calloc(count, size);

// 	strcpy(ptr, "t");
// 	strcpy(ptr2, "gh");
// 	write(1, ptr, prod);
// 	write(1, "\n", 1);

// 	write(1, ptr2, prod);
// 	write(1, "\n", 1);

// 	free(ptr);
// 	free(ptr2);

// 	return (0);
// }