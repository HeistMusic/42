/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luis-rod <luis-rod@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 10:40:51 by luis-rod          #+#    #+#             */
/*   Updated: 2023/10/04 11:11:12 by luis-rod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*s;
	size_t			i;

	i = -1;
	s = b;
	while (++i < len)
		s[i] = (unsigned char)c;
	return (b);
}

/*#include <stdio.h>
#include <string.h>
int main ()
{
     char *str;
     str = strdup("hola mundo funcionas ?");

     puts(str);

     ft_memset(str,'$',7);
     puts(str);

     return(0);
}*/
