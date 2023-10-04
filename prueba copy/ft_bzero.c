/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luis-rod <luis-rod@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/22 16:30:30 by luis-rod          #+#    #+#             */
/*   Updated: 2023/10/04 11:09:00 by luis-rod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libc.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*p;
	size_t			i;

	i = -1;
	p = s;
	while (++i < n)
		p[i] = 0;
}

/*#include <stdio.h>
#include <string.h>
#include <strings.h>

int main ()
{
     char *str;
     char *sttr;
     str = strdup("hola mundo funcionas ?");
     sttr = strdup("hola mundo funcionas ?2");

     puts(str);
     puts(sttr);

     ft_bzero(str, 7);
     puts(str);

     bzero(sttr, 7);
     puts(sttr);

     return(0);
}*/
