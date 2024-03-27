/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pamatya <pamatya@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 17:54:51 by pamatya           #+#    #+#             */
/*   Updated: 2024/03/20 19:58:12 by pamatya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// static void	f_toup(unsigned int i, char *c)
// {
// 	(void)i;
// 	if (*c >= 'a' && *c <= 'z')
// 		*c -= 32;
// }

// static void	f_tolow(unsigned int i, char *c)
// {
// 	(void)i;
// 	if (*c >= 'A' && *c <= 'Z')
// 		*c += 32;
// }

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;
	unsigned int	len;

	if (!s || !f)
		return ;
	len = ft_strlen(s);
	i = 0;
	while (s[i])
	{
		f(i, &(s[i]));
		i++;
	}
}

// int main(void)
// {
// 	char	*s;

// 	s = ft_strdup("This side DOWN!");
// 	printf("s1:	%s\n", s);

// 	ft_striteri(s, f_toup);
// 	printf("s2:	%s\n", s);

// 	ft_striteri(s, f_tolow);
// 	printf("s3:	%s\n", s);

// 	free(s);
// 	return (0);
// }
