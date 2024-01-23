/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luis-rod <luis-rod@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/21 13:24:35 by luis-rod          #+#    #+#             */
/*   Updated: 2024/01/21 13:26:08 by luis-rod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = ft_strlen(s1);
	if (!s1 || !set)
		return (0);
	while (s1[i] && ft_strchr(set, s1[i]))
		i++;
	while (ft_strchr(set, s1[j]) && j > 0)
		j--;
	if (i > j)
		return (ft_strdup(""));
	else
		return (ft_substr(s1, i, j - i + 1));
}

/*#include <unistd.h>
#include <stdio.h>
#include <string.h>
#include <strings.h>
int main ()
{
     char *s1;
     s1 = strdup("esta comete esta 1 atse");
	 char *s2;
     s2 = strdup("esta");

     puts("-------datos--------");
     puts(s1);
	 puts(s2);
     puts("-------resultado del codigo--------");
     puts(ft_strtrim(s1, s2));

     return(0);
}*/