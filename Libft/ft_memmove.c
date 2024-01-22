/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luis-rod <luis-rod@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 11:49:46 by luis-rod          #+#    #+#             */
/*   Updated: 2023/10/04 14:03:36 by luis-rod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*s;
	char	*d;

	s = (char *)src;
	d = (char *)dst;
	if (d < s)
	{
		return (ft_memcpy(d, s, len));
	}
	if (d > s)
	{
		while (len > 0)
		{
			d[len - 1] = s[len - 1];
			len--;
		}
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
     src = strdup("abcdefg");
     dst = strdup("lorem");
     char *src2;
     char *dst2;
     src2 = strdup("abcdefg");
     dst2 = strdup("lorem");

     puts("-------datos--------");
     puts(src);
     puts(dst);
     puts(src2);
     puts(dst2);

     puts("-------resultado fincion base--------");
     memmove(dst2, src2, 3);
     puts(dst2);

     puts("-------resultado del codigo--------");
     ft_memmove(dst, src, 4);
     puts(dst);

     return(0);
}*/
