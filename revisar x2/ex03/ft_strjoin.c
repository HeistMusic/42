/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luis-rod <luis-rod@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/26 11:08:05 by wiljimen          #+#    #+#             */
/*   Updated: 2023/07/26 15:38:39 by luis-rod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

void	separator(char *sep, char *str, int *k)
{
	int	i;

	i = 0;
	while (sep[i] != '\0')
	{
		str[*k] = sep[i];
		++*k;
		i++;
	}
}

void	str_fill(int size, char **strs, char *sep, char *str)
{
	int	i;
	int	j;
	int	k;

	i = 0;
	j = 0;
	k = 0;
	while (i < size)
	{
		j = 0;
		while (strs[i][j] != '\0')
		{
			str[k] = strs[i][j];
			j++;
			k++;
		}
		i++;
		if (i < size)
			separator (sep, str, &k);
	}
	str[k] = '\0';
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	int		accumulator;
	char	*str;

	if (size == 0)
	{
		str = malloc(1 * sizeof(char));
		str[0] = '\0';
		return (str);
	}
	accumulator = 0;
	i = 0;
	while (i < size)
	{
		accumulator += ft_strlen(strs[i]);
		i++;
	}
	accumulator += ((size - 1) * ft_strlen(sep)) + 1;
	str = malloc(sizeof(char) * accumulator);
	str_fill(size, strs, sep, str);
	return (str);
}

int	main(void)
{
	char **strs = malloc (2 * sizeof(char *));
	strs[0] = "buenos";
	strs[1] = "dias";
	char *str = ft_strjoin(2, strs, ", ");
	printf("%s", str);
}
