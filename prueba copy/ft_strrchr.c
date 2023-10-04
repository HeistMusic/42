/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luis-rod <luis-rod@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 08:44:35 by luis-rod          #+#    #+#             */
/*   Updated: 2023/10/02 09:04:36 by luis-rod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrchr(const char *s, int c)
{
	int	i;
	int	x;

	i = 0;
	x = 0;
	while (s[i])
	{
		if (s[i] == c)
		{
			x = i;
		}
		i++;
	}
	if (s[x] == c)
		return ((char *)&s[x]);
	else
		return (0);
}

/*#include <unistd.h>
#include <stdio.h>
#include <string.h>
#include <strings.h>
int main ()
{
     char *src;
     src = strdup("fiente111111");

     puts("-------datos--------");
     puts(src);
     puts("-------resultado fincion base--------");
     puts(strrchr(src, '1'));
     puts("-------resultado del codigo--------");
     puts(ft_strrchr(src, '1'));
     
     return(0);
}*/
