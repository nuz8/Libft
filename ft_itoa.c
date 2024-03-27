/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pamatya <pamatya@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/17 18:15:17 by pamatya           #+#    #+#             */
/*   Updated: 2024/03/20 19:41:25 by pamatya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// # include <stdlib.h>
// # include <unistd.h>
// # include <stddef.h>
// # include <stdio.h>
// # include <string.h>
// # include <strings.h>

static int	f_numlen(int n)
{
	int		i;
	long	num;

	num = (long)n;
	i = 0;
	if (num < 0)
		i = 1;
	while (num)
	{
		i++;
		num /= 10;
	}
	return (i);
}

static int	f_power(int base, int power)
{
	int		result;

	result = 1;
	if (!power)
		return (1);
	while (power--)
		result *= base;
	return (result);
}

// Recursive function
static void	f_tostr(char *str, long ln, int n_len)
{
	int		div;
	char	c;

	if (ln < 0)
	{
		*str++ = '-';
		ln = -ln;
		n_len--;
	}
	if (n_len > 0)
	{
		div = f_power(10, (n_len - 1));
		c = ln / div + '0';
		*str++ = c;
		f_tostr(str, (ln % div), (n_len - 1));
	}
	if (!n_len)
		*str++ = '\0';
}

// // Non-recursive function
// static void	f_tostr(char *str, int n, int n_len)
// {
// 	long	ln;
// 	int		div;
// 	char	c;

// 	ln = (long)n;
// 	if (ln < 0)
// 	{
// 		*str++ = '-';
// 		ln = -ln;
// 		n_len--;
// 	}
// 	div = f_power(10, (n_len - 1));
// 	while (n_len--)
// 	{
// 		c = ln / div + '0';
// 		*str++ = c;
// 		ln = ln % div;
// 		div /= 10;
// 	}
// 	*str = '\0';
// }

char	*ft_itoa(int n)
{
	char	*str;
	int		n_len;
	long	ln;

	if (!n)
		return (ft_strdup("0"));
	n_len = f_numlen(n);
	str = (char *)malloc((n_len + 1) * sizeof(char));
	if (!str)
		return (NULL);
	ln = (long)n;
	f_tostr(str, ln, n_len);
	return (str);
}

// int	main (void)
// {
// 	int		n;
// 	char	*str;

// 	n = -2147483648;
// 	// n = -2147;
// 	str = ft_itoa(n);

// 	write(1, str, 15);
// 	write(1, "$", 1);
// 	write(1, "\n", 1);
// 	printf("int n:	%d\n", n);
// 	printf("str n:	%s\n", str);
// 	printf("n len:	%d\n", (int)strlen(str));

// 	free(str);
// 	return (0);
// }
