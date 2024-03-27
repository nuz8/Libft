/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pamatya <pamatya@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 15:57:53 by pamatya           #+#    #+#             */
/*   Updated: 2024/03/20 20:32:23 by pamatya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// static char f_toup(unsigned int i, char c)
// {
// 	(void)i;
// 	if (c >= 'a' && c <= 'z')
// 		c -= 32;
// 	return (c);
// }

// static char f_tolow(unsigned int i, char c)
// {
// 	(void)i;
// 	if (c >= 'A' && c <= 'Z')
// 		c += 32;
// 	return (c);
// }

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*trnsfrmd;
	unsigned int	i;
	unsigned int	len;

	if (!s || !f)
		return (NULL);
	len = ft_strlen(s);
	i = 0;
	trnsfrmd = (char *)malloc((len + 1) * sizeof(char));
	if (!trnsfrmd)
		return (NULL);
	while (s[i])
	{
		trnsfrmd[i] = f(i, s[i]);
		i++;
	}
	trnsfrmd[i] = '\0';
	return (trnsfrmd);
}

// int main(void)
// {
// 	char	*s;
// 	char	*new;

// 	s = ft_strdup("This side DOWN!");
// 	new = ft_strmapi(s, f_toup);

// 	printf("s:	%s\n", s);
// 	printf("new:	%s\n", new);

// 	new = ft_strmapi(s, f_tolow);

// 	printf("s:	%s\n", s);
// 	printf("new:	%s\n", new);

// 	free(s);
// 	free(new);
// 	return (0);
// }
