/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pamatya <pamatya@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/23 15:10:03 by pamatya           #+#    #+#             */
/*   Updated: 2024/03/27 14:06:52 by pamatya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*f_findp(char const *start, char const *set, int const direction)
{
	char	*found;
	char	*check;

	found = (char *)start;
	check = (char *)set;
	while (*check && *found)
	{
		while (*check)
		{
			if (*found == *check)
			{
				found += direction;
				break ;
			}
			else
				check++;
		}
		if (*check != '\0')
			check = (char *)set;
	}
	return (found);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*trimmed;
	char	*startp;
	char	*endp;
	size_t	len;

	if (!s1)
		return (NULL);
	if (!*s1)
		return ((char *)ft_calloc(1, sizeof(char)));
	startp = f_findp(s1, set, 1);
	endp = f_findp((s1 + ft_strlen(s1) - 1), set, -1);
	if (!*startp)
		endp = startp;
	len = endp - startp + 1;
	if (len < 0)
		len = 0;
	trimmed = (char *)malloc((len + 1) * sizeof(char));
	if (!trimmed)
		return (NULL);
	len = 0;
	while (startp <= endp)
		*(trimmed + len++) = *startp++;
	*(trimmed + len) = '\0';
	return (trimmed);
}

// #include <string.h>
// #include <stdio.h>
// #include <unistd.h>

// int main (void)
// {
// 	char	*s1;
// 	char	*set;
// 	char	*trm;

// 	// s1 = strdup("  \t \t \n   \n\n\n\t");
// 	// set = strdup(" \n\t");
// 	// s1 = strdup("lorem \n ipsum \t dolor \n sit \t amet");
// 	// set = strdup(" ");
// 	s1 = strdup("lorem ipsum dolor sit aloretmet");
// 	set = strdup("torl");

// 	trm = ft_strtrim(s1, set);
// 	if (!trm)
// 		return (1);
// 	printf("Orig String:	%s\n", s1);
// 	printf("Trmd String:	%s\n", trm);
// 	free(trm);
// 	return (0);
// }
