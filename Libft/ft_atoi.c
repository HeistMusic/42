/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luis-rod <luis-rod@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 10:05:30 by luis-rod          #+#    #+#             */
/*   Updated: 2023/10/06 19:34:11 by luis-rod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	skip_whitespaces_minus(char *str, int *ptr_i)
{
	int		minus_count;
	int		i;

	i = 0;
	while (str[i] && (str[i] == '\f' || str[i] == '\t' || str[i] == ' '
			|| str[i] == '\n' || str[i] == '\r' || str[i] == '\v'))
		i++;
	minus_count = 0;
	if (str[i] && (str[i] == '+' || str[i] == '-'))
	{
		if (str[i] == '-')
			minus_count++;
		if (str[i + 1] == '-' || str[i + 1] == '+')
			minus_count++;
		i++;
	}
	*ptr_i = i;
	return (minus_count);
}

int	ft_atoi(const char *str)
{
	int		sign;
	int		result;
	int		i;

	result = 0;
	sign = 1;
	if (skip_whitespaces_minus((char *)str, &i) == 1)
		sign = -1;
	if (skip_whitespaces_minus((char *)str, &i) == 2)
		return (result);
	while (str[i] && str[i] >= '0' && str[i] <= '9')
	{
		result *= 10;
		result += str[i] - '0';
		i++;
	}
	result *= sign;
	return (result);
}

/*#include <unistd.h>
#include <stdio.h>
#include <string.h>
#include <strings.h>
#include <stdlib.h>
int main ()
{
     char *s1;
     s1 = strdup("                    - 154");

     puts("-------datos--------");
     puts(s1);
     puts("-------resultado fincion base--------");
     printf("%d", atoi(s1));
	 printf("%c", '\n');
     puts("-------resultado del codigo--------");
     printf("%d", ft_atoi(s1));
	 printf("%c", '\n');
     return(0);
}*/
