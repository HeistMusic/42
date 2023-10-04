/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luis-rod <luis-rod@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/29 17:45:18 by luis-rod          #+#    #+#             */
/*   Updated: 2023/10/04 11:11:34 by luis-rod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i])
	{
		if (s[i] == c)
		{
			return ((char *)&s[i]);
		}
		i++;
	}
	return (0);
}

/*#include <unistd.h>
#include <stdio.h>
#include <string.h>
#include <strings.h>
int main ()
{
     char *src;
     src = strdup("fiente1");

     puts("-------datos--------");
     puts(src);
     puts("-------resultado fincion base--------");
     puts(strchr(src, '1'));
     puts("-------resultado del codigo--------");
     puts(ft_strchr(src, '1'));
     
     return(0);
}*/
