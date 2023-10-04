/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luis-rod <luis-rod@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 10:31:09 by luis-rod          #+#    #+#             */
/*   Updated: 2023/10/04 13:56:00 by luis-rod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *restrict dst, const void *restrict src, size_t n)
{
	size_t				i;
	const unsigned char	*s;
	unsigned char		*d;

	i = -1;
	s = src;
	d = dst;
     if(!s && !d)
          return(0);
	while (++i < n)
	{
		d[i] = s[i];
	}
	return (d);
}

/*#include <stdio.h>
#include <string.h>
#include <strings.h>
int main ()
{
     char *src;
     char *dst;
     src = strdup("hola              mundo funcionas ?");
     dst = strdup("a");
     char *src2;
     char *dst2;
     src2 = strdup("hola              mundo funcionas ?");
     dst2 = strdup("a");

     puts(src);
     puts(dst);
     puts(src2);
     puts(dst2);

     ft_memcpy(dst, src, 7);
     puts(dst);
     memcpy(dst2, src2, 7);
     puts(dst2);

     return(0);
}*/
