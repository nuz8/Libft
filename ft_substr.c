/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pamatya <pamatya@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/15 16:06:04 by pamatya           #+#    #+#             */
/*   Updated: 2024/03/20 20:39:30 by pamatya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*str;
	char	*sub;
	size_t	i;
	size_t	len_s;

	str = (char *)s;
	i = 0;
	len_s = ft_strlen(str);
	if (start > len_s)
		len = 0;
	else if ((len_s - start) < len)
		len = len_s - start;
	sub = (char *)malloc((len + 1) * sizeof(char));
	if (!sub)
		return (NULL);
	while (i < len)
	{
		sub[i] = str[start + i];
		i++;
	}
	sub[i] = '\0';
	return (sub);
}

// int main (void)
// {
// 	char	*str;
// 	char	*sub;

// 	str = (char *)malloc(20);
// 	strcpy(str, "How about this?");

// 	sub = ft_substr(str, 6, 3);

// 	printf("str:	%s\n", str);
// 	printf("sub:	%s\n", sub);
// 	printf("str address:	%p\n", str);
// 	printf("sub address:	%p\n", sub);

// 	free(str);
// 	free(sub);
// 	return (0);
// }
