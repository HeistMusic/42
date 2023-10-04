/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luis-rod <luis-rod@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 10:31:07 by luis-rod          #+#    #+#             */
/*   Updated: 2023/10/04 11:08:37 by luis-rod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const char		*a;
	const char		*b;
	unsigned int	i;

	a = s1;
	b = s2;
	i = 0;
	if (n < 1)
		return (0);
	while (a[i] == b[i] && i < n && (a[i] && b[i]))
		i++;
	if (i == n)
		return (0);
	else
		return ((a[i] - b[i]));
}

/*#include <unistd.h>
#include <stdio.h>
#include <string.h>
#include <strings.h>
int main ()
{
     char *s1;
     s1 = strdup("fiente1");
	 char *s2;
     s2 = strdup("fiente1");

     puts("-------datos--------");
     puts(s1);
	 puts(s2);
     puts("-------resultado fincion base--------");
     printf("%d", memcmp(s1, s2, 20));
	 printf("%c", '\n');
     puts("-------resultado del codigo--------");
     printf("%d", ft_memcmp(s1, s2, 20));
	 printf("%c", '\n');
     return(0);
}*/