/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pamatya <pamatya@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 20:51:28 by pamatya           #+#    #+#             */
/*   Updated: 2024/03/20 19:36:18 by pamatya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Function to display the int representation of the initial part of string
int	ft_atoi(const char *str)
{
	int	signe;
	int	num;
	int	i;
	int	s_count;

	signe = 1;
	num = 0;
	i = 0;
	s_count = 0;
	while (str[i] == ' ' || str[i] == '\n' || str[i] == '\t'
		|| str[i] == '\v' || str[i] == '\f' || str[i] == '\r')
		i ++;
	while (str[i] == '+' || str[i] == '-')
	{
		s_count++;
		if (str[i] == '-')
			signe *= -1;
		i++;
	}
	if (s_count > 1)
		return (0);
	while (str[i] >= '0' && str[i] <= '9')
		num = num * 10 + (str[i++] - '0');
	num = signe * num;
	return (num);
}

// #include <unistd.h>
// #include <stdio.h>

// // Main method to test the function
// int	main(void)
// {
// 	char	str[] = "	 --00045655fg34ab567";
// 	char	*pstr;
// 	int		num;

// 	// char	str[] = "789";
// 	pstr = &str[0];
// 	// str = "---+--+1234ab567";
// 	num = ft_atoi(pstr);
// 	// num = convert_to_int(str);
// 	printf("Original string:%s\n", str);
// 	printf("C fn atoi:		%d\n", atoi(pstr));
// 	printf("Libft fn atoi:	%d\n", ft_atoi(pstr));
// 	return (0);
// }
