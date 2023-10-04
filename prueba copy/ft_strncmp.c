/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luis-rod <luis-rod@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 09:06:08 by luis-rod          #+#    #+#             */
/*   Updated: 2023/10/04 11:13:22 by luis-rod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned int	i;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0' && s1[i] == s2[i] && i < n)
		i++;
	return (s1[i] - s2[i]);
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
     printf("%d", strncmp(s1, s2, 20));
	 printf("%c", '\n');
     puts("-------resultado del codigo--------");
     printf("%d", ft_strncmp(s1, s2, 20));
	 printf("%c", '\n');
     return(0);
}*/