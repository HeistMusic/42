/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luis-rod <luis-rod@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 09:35:44 by luis-rod          #+#    #+#             */
/*   Updated: 2023/10/22 13:09:33 by luis-rod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char		*x;
	size_t				i;

	x = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		if (x[i] == (unsigned char)c)
			return ((void *)&x[i]);
		i++;
	}
	return (NULL);
}
/*#include <unistd.h>
#include <stdio.h>
#include <string.h>
#include <strings.h>
int main ()
{
     char *s1;
     s1 = strdup("fiente1");

     puts("-------datos--------");
     puts(s1);
     puts("-------resultado fincion base--------");
     puts(memchr(s1, '0', 20));
	 printf("%c", '\n');
     puts("-------resultado del codigo--------");
     puts(ft_memchr(s1, '0', 20));
	 printf("%c", '\n');
     return(0);
}*/
