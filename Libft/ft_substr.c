/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luis-rod <luis-rod@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 17:44:05 by luis-rod          #+#    #+#             */
/*   Updated: 2023/11/05 17:46:12 by luis-rod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	j;
	size_t	str_len;
	char	*str;

	str_len = ft_strlen(s);
	if (start >= str_len)
		len = 0;
	else if (len > str_len - start)
		len = str_len - start;
	str = (char *)malloc(sizeof(char) * (len + 1));
	if (!str)
		return (NULL);
	i = -1;
	j = 0;
	while (s[++i])
	{
		if (i >= start && j < len)
		{
			str[j] = s[i];
			j++;
		}
	}
	str[j] = 0;
	return (str);
}

/*#include <unistd.h>
#include <stdio.h>
#include <string.h>
#include <strings.h>
int main ()
{
     char *src;
     src = strdup("fient123456789");
     puts("-------datos--------");
     puts(src);
     puts("-------resultado del codigo--------");
     puts(ft_substr(src, 5, 3));
     return(0);
}*/
