/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pamatya <pamatya@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/15 19:26:54 by pamatya           #+#    #+#             */
/*   Updated: 2024/03/20 19:59:47 by pamatya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*j_str;
	size_t	len;
	size_t	i;

	len = ft_strlen(s1) + ft_strlen(s2);
	j_str = (char *)malloc((len + 1) * sizeof(char));
	if (!j_str)
		return (NULL);
	i = 0;
	while (i < len)
	{
		if (i < ft_strlen(s1))
			j_str[i] = s1[i];
		else
			j_str[i] = *s2++;
		i++;
	}
	j_str[i] = '\0';
	return (j_str);
}

// // Backup of old function with all conditions that were unnecessary
// (for hindsight)
// char *ft_strjoin(char const *s1, char const *s2)
// {
// 	char	*j_str;
// 	size_t	len;
// 	size_t	i;

// 	len = 0;
// 	if (!(*s1) && *s2)
// 		len = ft_strlen(s2);
// 	else if (*s1 && !(*s2))
// 		len = ft_strlen(s1);
// 	else if (*s1 && *s2)
// 		len = ft_strlen(s1) + ft_strlen(s2);
// 	j_str = (char *)malloc((len + 1) * sizeof(char));
// 	if (!j_str)
// 		return (NULL);
// 	i = 0;
// 	while (i < len)
// 	{
// 		if (i < ft_strlen(s1))
// 			j_str[i] = s1[i];
// 		else
// 			j_str[i] = *s2++;
// 		i++;
// 	}
// 	j_str[i] = '\0';
// 	return (j_str);
// }

// int main (void)
// {
// 	char	s1[50];
// 	char	s2[50];
// 	char	*js;

// 	strcpy(s1, "Can you join these ");
// 	strcpy(s2, "two? Yes, you can!");
// 	js = ft_strjoin(s1, s2);
// 	printf("Final string:	%s\n", js);

// 	// write(1, s1, 50);
// 	// write(1, "\n", 1);
// 	// write(1, s2, 50);
// 	// write(1, "\n", 1);
// 	// write(1, js, 50);
// 	// write(1, "\n", 1);

// 	free(js);
// 	return (0);
// }
