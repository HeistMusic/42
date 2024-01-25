/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luis-rod <luis-rod@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/21 13:06:42 by luis-rod          #+#    #+#             */
/*   Updated: 2024/01/21 13:33:34 by luis-rod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	counter(int n)
{
	int	count;

	if (!n)
		return (1);
	count = 0;
	if (n < 0)
	{
		n = n * (-1);
		count++;
	}
	while (n != 0)
	{
		n = n / 10;
		count++;
	}
	return (count);
}

char	*ft_itoa(int n)
{
	unsigned int	num;
	int				c;
	char			*str;

	str = malloc(sizeof(char) * counter(n) + 1);
	if (!str)
		return (0);
	num = n;
	c = counter(n) - 1;
	str[c + 1] = '\0';
	if (!n)
		str[0] = '0';
	if (n < 0)
	{
		str[0] = '-';
		num = num * (-1);
	}
	while (num > 0)
	{
		str[c] = '0' + num % 10;
		num = num / 10;
		c--;
	}
	return (str);
}

/*#include <unistd.h>
#include <stdio.h>
#include <string.h>
#include <strings.h>
int main ()
{
     int nbr;
     nbr = -42;

     puts("-------datos--------");
     printf("%d", nbr);
	 printf("%c", '\n');

     puts("-------resultado del codigo--------");
     puts(ft_itoa(nbr));
     
     return(0);
}*/