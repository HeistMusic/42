/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luis-rod <luis-rod@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/29 16:13:43 by luis-rod          #+#    #+#             */
/*   Updated: 2024/01/21 13:35:09 by luis-rod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	dstlen;
	unsigned int	srclen;

	j = 0;
	i = 0;
	while (dst[i] != '\0')
		i++;
	dstlen = i;
	srclen = (ft_strlen(src));
	if (dstsize == 0 || dstsize <= dstlen)
		return (srclen + dstsize);
	while (src[j] != '\0' && j < (dstsize - dstlen - 1))
	{
		dst[i] = src[j];
		j++;
		i++;
	}
	dst[i] = '\0';
	return (dstlen + srclen);
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
