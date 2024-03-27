/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pamatya <pamatya@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/23 20:07:38 by pamatya           #+#    #+#             */
/*   Updated: 2024/03/24 19:31:51 by pamatya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	f_cmpndl(const char *start, const char *needle, char *stop)
{
	unsigned char	*hay;
	unsigned char	*ndl;
	unsigned char	*stp;
	size_t			len_ndl;
	size_t			i;

	hay = (unsigned char *)start;
	ndl = (unsigned char *)needle;
	stp = (unsigned char *)stop;
	len_ndl = ft_strlen(needle);
	i = 0;
	while (i < len_ndl && hay != stp && (*hay || *ndl))
	{
		if (*hay != *ndl)
			return (-1);
		i++;
		hay++;
		ndl++;
	}
	if (i == len_ndl)
		return (0);
	return (1);
}

char	*ft_strnstr(const char *haystack, const char *needle, size_t look)
{
	char	*hay;
	char	*stop;

	hay = (char *)haystack;
	if (!*needle)
		return (hay);
	stop = hay + look;
	while (*hay && look--)
	{
		if ((f_cmpndl(hay, needle, stop)) == 0)
			return (hay);
		hay++;
	}
	return (NULL);
}

// #include <stdio.h>
// #include <strings.h>

// int	main (void)
// {
// 	char	*hay1;
// 	char	*hay2;
// 	char	*needle;
// 	size_t	look;

// 	look = 10;

// 	// hay1 = strdup("Hello!");
// 	// hay2 = strdup("Hello!");
// 	// needle = strdup("ell");
// 	// hay1 = strdup("This is a big string!");
// 	// hay2 = strdup("This is a big string!");
// 	// needle = strdup("ig");
// 	// hay1 = strdup("This is a big string!");
// 	// hay2 = strdup("This is a big string!");
// 	// needle = strdup("ig");
// 	hay1 = strdup("lorem ipsum dolor sit amet");
// 	hay2 = strdup("lorem ipsum dolor sit amet");
// 	needle = strdup("sit");

// 	printf("C fn strnstr():		%s\n", strnstr(hay1, needle, look));
// 	printf("Lib ft_strnstr():	%s\n", ft_strnstr(hay2, needle, look));

// 	return (0);
// }
