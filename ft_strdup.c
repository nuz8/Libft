/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pamatya <pamatya@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/15 13:38:19 by pamatya           #+#    #+#             */
/*   Updated: 2024/03/20 19:56:59 by pamatya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// static size_t ft_strlen1(const char *str);

char	*ft_strdup(const char *s1)
{
	char	*str;
	char	*ptr;
	char	*p;
	size_t	byts;

	str = (char *)s1;
	byts = ft_strlen(str);
	ptr = (char *)malloc((byts + 1) * sizeof(char));
	if (!ptr)
		return (NULL);
	p = ptr;
	while (byts--)
		*ptr++ = *str++;
	*ptr++ = '\0';
	return (p);
}

// static size_t ft_strlen1(const char *str)
// {
// 	size_t	len;

// 	len = 0;
//     while (*str++)
//         len++;
// 	return (len);
// }

// int main (void)
// {
// 	// int		count;
// 	int		size;
// 	char	*ptr;
// 	char	*ptr2;
// 	int		prod;

// 	// count = 3;
// 	// // size = 2;
// 	size = sizeof(char);
// 	prod = 10 * size;

// 	ptr = (char *)malloc(prod);
// 	strcpy(ptr, "Copy this!");
// 	ptr2 = strdup(ptr);

// 	write(1, ptr, prod);
// 	write(1, "\n", 1);
// 	write(1, ptr, prod);
// 	write(1, "\n", 1);

// 	write(1, ptr2, prod);
// 	write(1, "\n", 1);
// 	write(1, ptr2, prod);
// 	write(1, "\n", 1);

// 	free(ptr);
// 	free(ptr2);

// 	return (0);
// }
