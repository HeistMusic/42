/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luis-rod <luis-rod@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/29 16:13:43 by luis-rod          #+#    #+#             */
/*   Updated: 2023/10/04 11:12:11 by luis-rod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *restrict dst, const char *restrict src, size_t dstsize)
{
	unsigned int	i;
	unsigned int	j;

	j = 0;
	i = 0;
	while (dst[i] != '\0')
	{
		i++;
	}
	while (src[j] != '\0' && j < dstsize)
	{
		dst[i] = src[j];
		j++;
		i++;
	}
	dst[i] = '\0';
	return (i);
}

/*#include <stdio.h>
#include <string.h>
#include <strings.h>
int main ()
{
     char *src;
     char *dst;
     src = strdup("+++");
     dst = strdup("****");
     char *src2;
     char *dst2;
     src2 = strdup("+++");
     dst2 = strdup("****");

     puts("-------datos--------");
     puts(src);
     puts(dst);
     puts(src2);
     puts(dst2);
     
     puts("-------resultado del codigo--------");
     ft_strlcat(dst, src, 20);
     puts(dst);
     puts("-------resultado fincion base--------");
     strlcat(dst2, src2, 20);
     puts(dst2);

     return(0);
}*/