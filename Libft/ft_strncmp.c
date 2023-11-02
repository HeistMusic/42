/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luis-rod <luis-rod@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 09:06:08 by luis-rod          #+#    #+#             */
/*   Updated: 2023/10/06 14:19:39 by luis-rod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned int	i;

	i = 0;
	if (n <= 0)
		return (0);
	while (s1[i] != '\0' && s2[i] != '\0' && s1[i] == s2[i] && i < (n - 1))
		i++;
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
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
     s2 = strdup("fiente2");

     puts("-------datos--------");
     puts(s1);
	 puts(s2);
     puts("-------resultado fincion base--------");
     printf("%d", strncmp("test\200", "test\0", 6));
	 printf("%c", '\n');
     puts("-------resultado del codigo--------");
     printf("%d", ft_strncmp("test\200", "test\0", 6));
	 printf("%c", '\n');
     return(0);
}*/
