/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luis-rod <luis-rod@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 11:29:43 by luis-rod          #+#    #+#             */
/*   Updated: 2023/10/06 17:39:24 by luis-rod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (!*needle)
		return ((char *)haystack);
	while (i < len && haystack[i])
	{
		j = 0;
		while (i + j < len && haystack[i + j] == needle[j] && needle[j])
			j++;
		if (!needle[j])
			return ((char *)haystack + i);
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
     s1 = strdup("probando hacker 111111111111111111111111111111");
	 char *s2;
     s2 = strdup("1");

     puts("-------datos--------");
     puts(s1);
	 puts(s2);
     puts("-------resultado fincion base--------");
     puts(strnstr(s1, s2, 17));
	 printf("%c", '\n');
     puts("-------resultado del codigo--------");
     puts(ft_strnstr(s1, s2, 17));
	 printf("%c", '\n');
     return(0);
}*/
