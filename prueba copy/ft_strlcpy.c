/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luis-rod <luis-rod@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/29 15:13:18 by luis-rod          #+#    #+#             */
/*   Updated: 2023/10/04 11:12:41 by luis-rod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *restrict dst, const char *restrict src, size_t dstsize)
{
	unsigned int	i;

	i = 0;
	dstsize = dstsize -1;
	while (src[i] != '\0')
	{
		if (i <= dstsize)
			dst[i] = src[i];
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
     src = strdup("fiente1");
     dst = strdup("1dfsdfsdfsdfsdfsdf");
     char *src2;
     char *dst2;
     src2 = strdup("fiente2");
     dst2 = strdup("2shhfkjshdfkhsdjkfhkjsfkjs");

     puts("-------datos--------");
     puts(src);
     puts(dst);
     puts(src2);
     puts(dst2);
     
     puts("-------resultado del codigo--------");
     ft_strlcpy(dst, src, 20);
     puts(dst);
     puts("-------resultado fincion base--------");
     strlcpy(dst2, src2, 20);
     puts(dst2);

     return(0);
}*/
